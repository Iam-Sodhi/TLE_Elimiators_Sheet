#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            vector<int> a(n);
            int e=2;
            int i=0;
            while(i<n/2){
                a[i]=e;
                e+=2;
                i++;
            }
            int o=1;
            i=n/2;
            while(i<n){
                a[i]=o;
                o+=2;
                i++;
            }
            a[n-1]+= n/2;
            cout<<"YES"<<endl;
            for(auto it: a)cout<<it<<" ";
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}