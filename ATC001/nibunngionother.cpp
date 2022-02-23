#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    if (A[N - 1] < K)
        cout << -1 << endl;
    else
    {
        auto T = lower_bound(A.begin(), A.end(), K);
        cout << T -A.begin() << endl;
    }
}