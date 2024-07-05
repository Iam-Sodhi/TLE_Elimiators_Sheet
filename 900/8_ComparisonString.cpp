#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    int n;cin>>n;
    string s;
    cin>>s;
    int maxi=1;
    int cnt=1;
    char prev=s[0];
    for(int i=1;i<n;i++){
        if(s[i]==prev){cnt++; 
        maxi=max(maxi,abs(cnt));
        }
        else {
            cnt=1;
            prev=s[i];
        }
    }
    cout<<maxi+1<<endl;
}
    return 0;
}