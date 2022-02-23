#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0;
    int q = 0;
    cin >> n >> q;
    vector<int> A(n);
    vector<int> x(q);
    for (auto &a :A)
    {
        cin >> a;
    }
    for (auto &a : x)
    {
        cin >> a;
    }
    int sum = 0;
    sort ( A.begin(), A.end());
    for (int i = 0; i < q; i++)
    {
        auto T = lower_bound(A.begin(), A.end(), x[i]);
        sum = T - A.end();
        cout << sum << endl;
        sum = 0;
    }
}