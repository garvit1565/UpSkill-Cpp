#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &vec)
{
    int n = vec.size();
    int temp, j;
    for (int i = 1; i < n; i++)
    {
        temp = vec[i];

        j = i - 1;
        while (j >= 0 && temp < vec[j])
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = temp;
    }
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
    insertionSort(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}