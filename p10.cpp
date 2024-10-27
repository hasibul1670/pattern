#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int col = 1; col <= i; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-1; i >=1; i--)
    {
        for (int col = 1; col <= i; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    printPattern(N);
    return 0;
}


// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
