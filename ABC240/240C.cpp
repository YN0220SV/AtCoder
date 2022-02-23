#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n >> x;
    vector<int> a;
    vector<int> b;
    vector<int> c(n);
    int jj;
    int kk;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> jj;
        a.push_back(jj);
        sum += jj;
        cin >> kk;
        b.push_back(kk);
    }
    for (int i = 0; i < n;i++)
    {
        c[i] = b[i] - a[i];
    }

    
    sort(c.begin(), c.end());

    if (sum > x)
    {
        cout << "No" << endl;
        return 0;
        }
        else if (sum == x)
        {
            cout << "Yes" << endl;
            return 0;
        }
        else{
        for (int i = 0; i < n;i++)
        {
            sum += c[i];
            if(sum==x)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}