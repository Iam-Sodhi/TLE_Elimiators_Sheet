#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    int x=0,b=INT_MAX;
    for(int i=0; i<n; i++){cin>>a[i];
    x=max(x,a[i]);
    b=min(b,a[i]);
    }
    int maxi=0;
    for(int i=0;i<n-1;i++){
        maxi=max(maxi, a[i]-a[i+1]);
    }

    maxi=max(maxi,x-a[0]);
    maxi=max(maxi,a[n-1]-b);
    cout<<maxi<<endl;

}
    return 0;
}