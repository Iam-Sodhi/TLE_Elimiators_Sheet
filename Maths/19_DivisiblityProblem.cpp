#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    int a, b;
    cin>>a>>b;
   
    int rm=a%b;
    if(rm==0)cout<<0<<endl;
    else
    cout<<b-rm<<endl;
}
    return 0;
}