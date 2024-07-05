#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;

        long long low=(k*(k+1))/2;
        long long p=n-k;
        long long high=((n*(n+1))/2)-((p*(p+1))/2);
        if(x>=low && x<=high)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}