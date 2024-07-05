#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while(t--){
     int n;
     cin>>n;
     int cnt=0;

     vector<long long> ans;
     while(n){
        int ld=n%10;
        if(ld!=0){
            ans.push_back(ld*pow(10,cnt));
        }
        cnt++;
        n/=10;
     }
     cout<<ans.size()<<endl;
     for(auto it: ans)cout<<it<<" ";
     cout<<endl;
}
    return 0;
}