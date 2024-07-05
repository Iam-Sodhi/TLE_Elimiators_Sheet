#include <bits/stdc++.h>
using namespace std;
//Observe -> After every four jumps, it returns back to original state. for odd , even only directions change.
int main()
{	int t;
cin>>t;
     while(t--){
        long long x, n;
        cin>>x>>n;
        long long diff=0;

         if(n%4==0) diff=0;
         else if(n%4==2)diff=1;
         else if(n%4==3)diff= n+1;
        else diff= -n;

        if(x&1)x=x-diff;
        else x=x+diff;
    
        cout<<x<<endl;
     }
    return 0;
}