#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    int mid = start + ((end - start) / 2);
    int i = start;
    int j = mid + 1;
    int k = 0;
    int *aux = new int[end - start + 1];

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            aux[k++] = arr[i++];
        }
        else
        {
            aux[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        aux[k++] = arr[i++];
    }

    while (j <= end)
    {
        aux[k++] = arr[j++];
    }

    for (int x = 0; x < k; x++)
    {
        arr[start + x] = aux[x];
    }

    delete[] aux;
}

void mergeSort(vector<int> &arr, int start, int end)
{
    if (start == end)
    {
        return;
    }

    int mid = start + ((end - start) / 2);

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main()
{
    vector<int> v;
    int ele;
    int n;
    cout << "Enter size ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    cout << endl;
    mergeSort(v, 0, v.size() - 1);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}