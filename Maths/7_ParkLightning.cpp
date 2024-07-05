#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while (t--){
    int n,m;
    cin>>n>>m;
      if(n%2==0){
        int a= n/2;
        cout<<a*m<<endl;
      }
      else if(m%2==0){
        int a=m/2;
        cout<<a*n<<endl;
      }
      else{
        int a=n/2;
        int ans= a*m;
        ans= ans+ m/2;
        ans++;
        cout<<ans<<endl;
      }
}
    return 0;
}