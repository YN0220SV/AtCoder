#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = abs(a - b);
    if (ans == 1 || ans == 9)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}