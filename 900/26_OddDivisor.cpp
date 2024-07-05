#include <bits/stdc++.h>
using namespace std;
//just check the no of set bits of the number
int main()
{	int t;
cin >> t;
    while(t--){
         long long n;
         cin>>n;
         if(n&1)cout<<"YES"<<endl;
         else {
             //trick to check if the number is power of 2
             if( (n&(n-1))==0)cout<<"NO"<<endl;
             else cout<<"YES"<<endl;
         }
    }
    return 0;
}