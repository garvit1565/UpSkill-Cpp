#include <iostream>
using namespace std;

int raiseToPower(int n, int m)
{
    if (m == 0)
        return 1;

    return n * raiseToPower(n, m - 1);
}

int main()
{

    int n;
    cout << "Enter n: ";
    cin >> n;

    int m;
    cout << "Enter m: ";
    cin >> m;

    cout << raiseToPower(n, m);

    return 0;
}