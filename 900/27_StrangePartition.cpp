#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while(t--){
    int n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    long long maxi=0; // no need to change anything
    for(int i=0;i<n;i++){
        int t=a[i];
        maxi+= (ceil(((double)t)/(1.0 * x)));
    }
    
    long long mini=0;
    long long t=0;
    for(int i=0;i<n;i++){
        t+=a[i];
        if(t%x==0){
            mini+= (t/x);
            t=0;
        }
    }
    mini+= ceil(((double)t)/(1.0 * x));

    cout<<mini<<" "<<maxi<<endl;
}
    return 0;
}