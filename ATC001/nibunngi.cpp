#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 0;
    cin >> n;
    int x = 0;
    int k = 0;
    cin >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A[i] = x;
    }
    
    int minindex = -1;
    int maxindex = n;
    int ans = -1;
    while (maxindex - minindex > 1)
    {
        int nowborder = (minindex + maxindex) / 2;
        //cout << nowborder << " " << A[nowborder] << endl;
        if (A[nowborder] >= k)
        {
            //ans = A[nowborder];
            //cout << "upper" << endl;
            maxindex = nowborder;
        }
        else
        {
            //cout << "lower" << endl;
            minindex = nowborder;
        }
    }
    if(maxindex>=n)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << maxindex<< endl;
    return 0;
}