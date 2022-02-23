#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a;
    long int b;
    cin >> a >> b;
    int x = 0;
    int y = 0;

    string ans = "Easy";
    for (int i = 0; i < 19; i++)
    {
        x = a % 10;
        y = b % 10;
        if (x + y >= 10)
        {
            ans = "Hard";
        }
        a = a / 10;
        b = b / 10;
    }
    cout << ans << endl;
}