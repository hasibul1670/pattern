#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int col = 0; col <= i; col++)
        {
            count++;
            cout << count <<" ";
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
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
