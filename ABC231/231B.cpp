#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N = 0;
    cin >> N;
    vector<string> S(N);
    vector<pair<int, string>> EL;
    EL.push_back(make_pair(0, ""));
    for (auto &x : S)
    {
        cin >> x;
    }
    //cout << "faze 1" << endl;
    bool addflag = true;
    for (auto &x : S)
    {
        //cout << x << endl;
        for (auto &y : EL)
        {
            if (x == y.second)
            {
                y.first++;
                addflag = false;
                break;
            }
            else
            {
               // EL.push_back(make_pair(1, x));
            }
        }
        if(addflag)
        {
            EL.push_back(make_pair(1, x));
        }
        addflag = true;
    }

   

    // << EL.size() << endl;
    sort(EL.begin(), EL.end());
    reverse(EL.begin(), EL.end());
    // cout << "faze 3" << endl;
    auto ans = EL[0];

    cout << ans.second << endl;
}