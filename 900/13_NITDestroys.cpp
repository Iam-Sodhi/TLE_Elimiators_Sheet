#include <bits/stdc++.h>
using namespace std;
//Maximum two operation are required
int main()
{	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool z=true;
        int cons=0;
        for(int i=0; i<n; i++){cin>>a[i];
        if(a[i]!=0)z=false;
        if(i!=0 && a[i] && a[i-1]==0)cons++;
        }
        if(a[0])cons++;
        if(z)cout<<0<<endl;
        else if(cons==1){
            //if all non-zero are consecutive
            cout<<1<<endl;
        }
        else cout<<2<<endl;

    }

    return 0;
}