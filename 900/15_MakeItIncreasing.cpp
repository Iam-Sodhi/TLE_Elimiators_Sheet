#include <bits/stdc++.h>
using namespace std;
// Function to check if a number is a power of 2
bool isPowerOf2(int x)
{
    return (x & (1 << (int)log2(x))) == x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = true;
        long long cnt = 0;
        for(int i=n-1;i>=1;i--){
            if(a[i]==0){
                flag=false;
                break;
            }
            while(a[i-1]>0 && a[i]<=a[i-1]){
                a[i-1]/=2;
                cnt++;
            }
        }
        // for (int i = n - 2; i >= 0; i--)
        // {
        //     long long t = 0;
        //     if (a[i] >= a[i + 1])
        //     {

        //         if (a[i] != a[i + 1])
        //         {
        //              t= floor( log2(( (double)a[i])/a[i+1]));
        //              t++;
                 
        //         }
        //         else
        //             t = 1;

        //         cnt += (t);
        //     }
        //     //cout << a[i] << " " << t << endl;
        //     a[i] = a[i] / (pow(2, t));
        //     if (i != 0 && a[i] == 0)
        //     {
        //         flag = false;
        //         break;
        //     }
        // }
        if (!flag)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}