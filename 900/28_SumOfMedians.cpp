#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
   while(t--){
    int n,k;
    cin>>n>>k;
      vector<long long> a(n*k);
      for(int i=0;i<(n*k);i++)cin>>a[i];
      int t=n/2 +1;
      long long sum=0;
      int cnt=0;
      for(int i=(n*k)-1;i>=0;i--){
         t--;
         if(t==0){
            sum+=a[i];
            t= n/2 +1;
            cnt++;
            if(cnt==k)break;
         }
      }
      cout<<sum<<endl;
   }
    return 0;
}