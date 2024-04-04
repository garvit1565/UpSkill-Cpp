// time  complexity : O(n)
// space complexity : O(n + k)
// stable sorting algorithm

// maximum element should be of the order n
//  for ex: 2n,4n,5n etc.... and not like n^2 or n^3 etc.....

// only for integers (no floats)
// elements should be in a small range

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

void countSort(vector<int> &vec)
{
    int maxi = INT_MIN;
    for (auto x : vec)
    {
        maxi = max(maxi, x);
    }

    // finding the count of every element in the sorted array
    vector<int> count(maxi + 1, 0);
    for (int i = 0; i < vec.size(); i++)
    {
        count[vec[i]]++;
    }

    // modifying the count array (prefix sum)
    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }

    int *output = new int[vec.size()];
    // .....SORTING HAPPENING.....
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        output[--count[vec[i]]] = vec[i];
    }

    //  copying the data back into original array
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = output[i];
    }
    delete[] output;

    // printing the answer
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(vec);

    return 0;
}
