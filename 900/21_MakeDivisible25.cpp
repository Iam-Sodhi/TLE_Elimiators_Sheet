#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    bool five=false, zero=false;
    int cnt=0;
    while(n){
        int rm=n%10;
         cnt++;
        if(zero && (rm==0 || rm==5)){
            break;
        }
        if(five && (rm==2 || rm==7)){
            break;
        }
         if(rm==0)zero=true;
        if(rm==5)five=true;
        
        n=n/10;
    }
    cout<<cnt-2<<endl;
}
    return 0;
}