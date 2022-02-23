#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    int y = 0;
    cin >> y;
    int ans = 0;
    if(x>=y)
    {
        cout << ans << endl;
        return 0;
    }
    int husoku = y - x;
    
    if (husoku % 10 == 0)
    {
        ans = husoku / 10;
    }
    else
    {
        husoku += 10;
        ans = husoku / 10;
    }
    

    cout << ans << endl;
}