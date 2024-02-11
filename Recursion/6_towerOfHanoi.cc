#include <iostream>
using namespace std;

void solveTowerOfHanoi(int disks, string source, string destination, string aux)
{

    static int ctr = 0;

    if (disks == 1)
        cout << ++ctr << " Move disk from " << source << " to " << destination << endl;

    else
    {

        solveTowerOfHanoi(disks - 1, source, aux, destination);
        cout << ++ctr << " Move disk from " << source << " to " << destination << endl;
        solveTowerOfHanoi(disks - 1, aux, destination, source);
    }
}

int main()
{

    solveTowerOfHanoi(20, "Source", "Destination", "Aux");

    return 0;
}