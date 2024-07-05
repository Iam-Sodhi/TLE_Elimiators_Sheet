#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int t;
        int maxi = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mp[t]++;
            maxi = max(maxi, mp[t]);
        }

        int rm = n - maxi;

        int cnt = 0;
  
        while (rm > 0)
        {
            if (rm >= maxi)
            {
                rm -= (maxi);
                cnt += maxi + 1;
                maxi *= 2;
            }
            else
            {
                cnt += (rm + 1);
                rm = 0;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}