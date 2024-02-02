#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = n - 1; j >= i+1; j--)
        {
            if (vec[j] < vec[j - 1])
            {
                swap(vec[j], vec[j - 1]);
            }
        }
    }
}

int main()
{
    vector<int> v = {1, 7, 6, 5, 2, 3, 4, 8, 9, 0};
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;
    bubbleSort(v);
    for (int ele : v)
    {
        cout << ele << " ";
    }

    return 0;
}