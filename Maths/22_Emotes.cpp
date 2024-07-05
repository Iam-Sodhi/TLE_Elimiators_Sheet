#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,m,k;
     cin>>n>>m>>k;
    long long maxi,prev;
    cin>>maxi;
    prev=-1;
    long long t;
    for(int i=1;i<n;i++){
            cin>>t;
            if(t>maxi){
                prev=maxi;
                maxi=t;
            }
            else prev=max(prev,t);
    }
     long long tmp=m/(k+1);
     long long a= (k*maxi + prev);
     long long rm=m%(k+1);
     long long sum= tmp*a + rm*maxi;
     
     cout<<sum<<endl;

    return 0;
}