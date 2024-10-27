#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int col = 1; col <= i ; col++)
        {
           cout << ((i + col) % 2);
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

// 0
// 10
// 010
// 1010
// 01010
