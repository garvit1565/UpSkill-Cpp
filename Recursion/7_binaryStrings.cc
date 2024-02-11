// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// vector<string> binaryStrings(int n)
// {

//     if (n == 1)
//     {
//         return {"0", "1"};
//     }
//     else
//     {
//         vector<string> prev = binaryStrings(n - 1);
//         vector<string> result;
//         for (const string &s : prev)
//         {
//             result.push_back(s + "0");
//             result.push_back(s + "1");
//         }
//         return result;
//     }
// }

// int main()
// {
//     int n = 3;
//     vector<string> binary = binaryStrings(n);
//     int ctr = 1;
//     for (const string &s : binary)
//     {
//         cout << ctr++ << "  -  " << s << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

void binaryString(int n, string pre = "")
{
    if (n == 1)
    {
        cout << pre + "0" << endl;
        cout << pre + "1" << endl;
    }
    else
    {
        binaryString(n - 1, pre + "0");
        binaryString(n - 1, pre + "1");
    }
}

int main()
{
    binaryString(3);
    return 0;
}
