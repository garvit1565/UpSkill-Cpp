#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int> &vec)
{
    int size = vec.size();
    int minInd;
    for (int i = 0; i < size - 1; i++)
    {
        minInd = i;
        for (int j = i+1; j < size; j++)
        {
            if (vec[j] < vec[minInd])

            {
                minInd = j;
            }
        }
        swap(vec[i], vec[minInd]);
    }
}

int main()
{

    vector<int> vec = {0, 11, 9, 8, 5, 15, 19, 14, 13};

    for(int ele : vec)
    {
        cout<<ele<<" ";
    }

    cout << endl;
    selectionSort(vec);

    for(int ele : vec)
    {
        cout<<ele<<" ";
    }


    return 0;
}