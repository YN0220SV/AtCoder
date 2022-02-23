#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string A;
    cin >> A;
    int a = 0;
    int b = 0;
    cin >> a >> b;
    char karioki=' ';
    karioki = A[a - 1];
    A[a - 1] = A[b - 1];
    A[b - 1] = karioki;
    cout << A << endl;

}