// print all the strings of length n which can we formed by using [0,9] and repetition is allowed

#include <iostream>
using namespace std;

void printDecimalStrings(int n, string prefix = "")
{

    if (n == 1)
    {
        for (int i = 0; i <= 9; i++)
        {
            cout << prefix + char(i + '0') << endl;
        }
    }
    else
    {

        for (int i = 0; i <= 9; i++)
        {
            printDecimalStrings(n - 1, prefix + char(i + '0'));
        }
    }
}

int main()
{

    int n;
    cout << "Enter the length of string: ";
    cin >> n;
    printDecimalStrings(n);

    return 0;
}