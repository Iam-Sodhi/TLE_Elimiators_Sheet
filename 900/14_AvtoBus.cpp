#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    if(n&1  || n<4){cout<<-1<<endl;continue;}
    long long mini=LLONG_MAX;
    long long maxi=0;
    long long f= n/4;
    maxi=max(maxi,f);

    //if we consider that 6 wheel bus
    long long s=n/6;
    //cout<<n%6<<" "<<s<<endl;
    if(n%6){
        mini=min(mini,s+1);
    }
    else{
       mini=min(mini,s);
    }
   // cout<<mini<<" "<<maxi<<endl;
     if(mini==LONG_MAX)mini=maxi;
     if(maxi==0)maxi=mini;

    cout<<mini<<" "<<maxi<<endl;
   

}
    return 0;
}