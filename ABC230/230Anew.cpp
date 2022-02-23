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
    cout <<"AGC"<< setfill('0') << setw(3) << inta<<endl;

    return 0;
}