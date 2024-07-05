#include <bits/stdc++.h>
using namespace std;
int main()
{	long long n;
    cin>>n;
    int cnt=0;
    while(n){
        int ld=n%10;
        if(ld==4 || ld==7)cnt++;
        n =n/10;
    }
    bool flag=true;
    if(cnt==0)flag=false;
    while(cnt){
        int ld=cnt%10;
        if(ld!=4 && ld!=7){flag=false; break;}
        cnt /=10;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}