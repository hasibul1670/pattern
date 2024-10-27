#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int spaces = 2 * (n- 1);
    for (int i = 1; i <= n; i++)
    {

        for (int col = 1; col <= i; col++)
        {
            cout << col;
        }
        for (int col = 1; col <= spaces; col++)
        {
            cout << " ";
        }
        for (int col = i; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;

        spaces = spaces - 2;
    }
}

int main()
{
    int N;
    cin >> N;
    printPattern(N);
    return 0;
}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
