#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    if(a[1]==1)a[1]++;
     for(int i=2;i<=n;i++){
        if( a[i]==1|| a[i]%a[i-1]==0){
            a[i]++;
           while((a[i]%a[i-1])==0)  a[i]++;
        }
     }
     
     for(int i=1;i<=n;i++)cout<<a[i]<<" ";
     cout<<endl;
   }
    return 0;
}