#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    if(a==b)cout<<0<<" "<<0<<endl;
    else{

    long long diff=abs(a-b); // this is maximum GCD 
    long long moves= abs(a%diff);
    moves=min(moves,diff - (a%diff));
    cout<<diff<<" "<<moves<<endl;
    }
}
    return 0;
}