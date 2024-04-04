// Time complexity = O(d*n)    where d is the number of digits in the max number
// Space complexity = O(n)
// STABLE sorting algorithm
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

void countSort(vector<int> &vec, int pos)
{
    // create a freq / count array
    vector<int> count(10, 0); // as a digit will only be between 0 and 9
    for (int i = 0; i < vec.size(); i++)
    {
        count[vec[i] / pos % 10]++; // to store the frequency of the given position (ones,tens,hundred)
    }

    // prefix sum
    for (int i = 1; i < count.size(); i++)
    {
        count[i] += count[i - 1];
    }

    int *output = new int[vec.size()];
    for (int i = vec.size() - 1; i >= 0; i--)
    {
        output[--count[(vec[i] / pos) % 10]] = vec[i];
    }

    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = output[i];
    }
    delete[] output;
}

void radixSort(vector<int> &vec)
{
    int maxi = INT_MIN;
    for (auto x : vec)
    {
        maxi = max(x, maxi);
    }

    int pos = 1;
    while (maxi / pos > 0)
    {
        countSort(vec, pos);
        pos *= 10;
    }
}
int main()
{
    vector<int> arr = {170, 45, 75, 90, 802, 2};
    radixSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}