#include <bits/stdc++.h>
using namespace std;
int main()
{	int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=b[i]-a[i];
        maxi=max(maxi,sum);
    }
    cout<<maxi<<endl;
    return 0;
}