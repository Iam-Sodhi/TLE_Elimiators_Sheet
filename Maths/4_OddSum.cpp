#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    int o=0, e=0; int sum=0;
    for(int i=0; i<n; i++){cin>>a[i];
      if(a[i]&1)o++;
      else e++;
      sum+=a[i];
    }

    if(sum&1)cout<<"YES"<<endl;
    else{
         if(o==0 || e==0)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
    }

 }
    return 0;
}