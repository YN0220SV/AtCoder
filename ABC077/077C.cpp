#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n);i++)
int main()
{
    int N = 0;
    cin >> N;
    vector<long long> A(N);
    vector<long long> B(N);
    vector<long long> C(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) cin >> C[i];
    sort(A.begin(), A.end());
    sort(C.begin(), C.end());
    long long a = 0;
    long long c = 0;
    long long sum = 0;

    for (int i = 0; i < N; i++)
    {
        auto AI = lower_bound(A.begin(), A.end(), B[i]);
        auto CI = upper_bound(C.begin(), C.end(), B[i]);
        a = AI - A.begin() ;
        c = C.end() - CI;
       // cout << a << " " << c << endl;
        sum += a * c;
    }
    cout << sum;
}