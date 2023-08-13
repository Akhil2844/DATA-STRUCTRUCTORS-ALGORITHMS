#include<iostream>
using namespace std;

void reachHome(int src, int dest)
{
    cout << "Source " << src << " Destination " << dest << endl;

    // Base case
    if (src == dest)
    {
        cout << "Pahunch gya " << endl;
        return;
    }

    // Processing and recursive function
    src++;

    // Recursive call
    reachHome(src, dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);

    return 0;
}
