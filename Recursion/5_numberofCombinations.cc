// number of combinations to choose k objects from n objects where no repetition is allowed and order doesn't matter
#include <iostream>
using namespace std;

int numberOfCombinations(int n, int k)
{
    if (n < k)
        return -1;

    if (n <= 1 || k == 0 || k == n)
        return 1;

    return numberOfCombinations(n - 1, k) + numberOfCombinations(n - 1, k - 1);
}

int main()
{
    int total, choose;

    cout << "Enter total number of items: ";
    cin >> total;

    cout << "Enter number of items to be choosen from total: ";
    cin >> choose;
    cout << "Number of possible combinations: " << numberOfCombinations(total, choose) << endl;
    return 0;
}