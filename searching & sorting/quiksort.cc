#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &vec, int start, int end)
{
    int ctr = 0;
    int pivot = vec[start];

    for (int i = start + 1; i <= end; i++)
    {
        if (vec[i] <= pivot)
        {
            ctr++;
        }
    }
    int pivotIndex = start + ctr;
    swap(vec[pivotIndex], vec[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (vec[i] < pivot)
        {
            i++;
        }
        while (vec[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(vec[i++], vec[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(vector<int> &vec, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int p = partition(vec, start, end);

    quickSort(vec, start, p - 1);
    quickSort(vec, p + 1, end);
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
    quickSort(v, 0, v.size() - 1);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}