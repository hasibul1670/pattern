#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int col = 1; col <= i; col++)
        {
            cout << col;
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


// 1
// 12
// 123
// 1234
// 12345
