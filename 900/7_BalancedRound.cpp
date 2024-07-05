#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int cnt=1;
    int maxi=1;
    int prev=a[0];
    for(int i=1;i<n;i++){
        if(a[i]-prev<=k){
            cnt++;
            maxi=max(maxi,cnt);
            prev=a[i];
        }
        else{
            cnt=1;
            prev=a[i];
        }
    }

    cout<<n-maxi<<endl;
}
    return 0;
}