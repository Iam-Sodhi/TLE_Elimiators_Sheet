#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        vector<long long> psum(n+1,0);
        for(int i=1;i<=n;i++){
            psum[i]=a[i]+ psum[i-1];
        }
        while(q--){

        int l,r,k;
        cin>>l>>r>>k;
     
        long long sum= psum[l-1]+ psum[n]- psum[r] + (r-l+1)*k;
        if(sum&1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
    return 0;
}