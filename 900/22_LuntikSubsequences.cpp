#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while (t--){
    int n;
    cin>>n;
    long long ones=0, zeroes=0;
    int t;
    for(int i=0; i<n; i++){
        cin>>t;
        if(t==1)ones++;
        else if(t==0)zeroes++;
    }
    long long ans=0;
    if(ones==0)cout<<0<<endl;
    else {
         ans= pow(2,zeroes);
         ans= ans* ones;
         cout<<ans<<endl;
    }
}
    return 0;
}