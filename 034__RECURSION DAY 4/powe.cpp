#include <iostream>
using namespace std;

int power(int a, int b)
{

    // BASE CASE
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    // RECURSIVE CALL
    int ans = power(a, b / 2);

    // PROCESSING

    // even case
    if (b % 2 == 0)
    {
        return ans * ans;
    }

    // odd
    else
    {
        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "Ans is : " << ans << endl;
    return 0;
}