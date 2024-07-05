#include <bits/stdc++.h>
using namespace std;
//we know a& b <= min(a,b)
//To get minimum value, it is always optimal to and every element with every other element
int main()
{	int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int t;
    cin>>t;
    int ans=t;
    for(int i=0;i<n-1;i++){
        cin>>t;
        ans&=t;
    }
    cout<<ans<<endl;
}
    return 0;
}