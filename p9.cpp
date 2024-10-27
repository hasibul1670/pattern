#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
        {
            cout <<" ";
        }

        for (int col = 1; col <= 2 * i - 1; col++)
        {
            cout <<"*";
        }
        cout << endl;
    }
       for (int i = n; i >= 1; i--)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (int col = 1; col <= 2 * i - 1; col++)
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



//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
