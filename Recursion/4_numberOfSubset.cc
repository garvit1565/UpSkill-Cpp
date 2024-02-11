#include <iostream>
using namespace std;

int numberOfSubsets(int size)
{
    if (size == 0)
        return 1;

    return 2 * numberOfSubsets(size - 1);
}

int main()
{

    int size;
    cout << "Enter size of the set ";
    cin >> size;

    cout << numberOfSubsets(size);

    return 0;
}