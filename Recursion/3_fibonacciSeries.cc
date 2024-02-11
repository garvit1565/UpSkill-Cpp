// Time complexity = O(n)

#include <iostream>
using namespace std;

int fibo(int n, int b1, int b2)
{

    if (n == 0)
        return b1;

    else
        return fibo(n - 1, b2, b1 + b2);
}

int main()
{
    cout << fibo(10, 0, 1);

    return 0;
}