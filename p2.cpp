#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int col = 0; col <= i; col++)
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
