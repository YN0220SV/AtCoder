#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    vector<long int> a(n);
    long int x = 0;
    int ans = 0;
    cin >> a[0];
    int flg = 0;

    for (int i = 0; i < n - 1; i++)
    {
        flg = 1;
        cin >> x;
        for (int j = 0; j < a.size(); j++)
        {
            if ((a[j] == x))
            {
                flg = 0;
            }
        }
        if(flg!=0)
        {
            a.push_back(x);
        }
        ans += flg;
        
    }
    ans++;

    cout << ans << endl;
    return 0;
}