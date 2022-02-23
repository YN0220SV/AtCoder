#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int inta;
    inta = n;
    if (n >= 42)
    {
        inta = n + 1;
    }
    string a = "AGC0";
    if (inta >= 10)
    {
        a += to_string(inta);
    }
    else
    {
        a += "0" + to_string(inta);
    }
    cout << a << endl;
    return 0;
}