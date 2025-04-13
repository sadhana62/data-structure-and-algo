#include <iostream>
#include <cmath>
using namespace std;

int solve(int k, int n)
{
    if (k == 1 && n == 1)
    {
        return 0;
    }
    int len = pow(2, k - 1);
    int mid = len / 2;
    if (n <= mid)
    {
       return solve(k - 1, n);
    }
    else
    {
       return !solve(k - 1, n - mid);
    }
}
int main()
{
    /*
    Generate recurssive grammar if k and n both equal to 1 return 0
    grammar is like
    0
    0 1
    0 1 1 0
    0 1 1 0 1 0 0 1
    */
    "Enter the value of k and n for the grammar \n";
    int k, n;
    cin >> k;
    cin >> n;
    int result = solve(k, n);
    cout << "Hence the value at given kth and nth place is " << result <<endl;
    return 0;
}