#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a(2);
    cin >> a[0] >> a[1];
    sort(a.begin(), a.end());
    if(a[0]==1&& a[1]==1)cout<<0<<endl;
    else if(a[0]==1){
        cout<<a[1]/2<<endl;
    }
    else{
        int x=a[0]/2; 
        int sum= x*a[1];
        int rm=a[0]%2;
        if(rm) sum+=  a[1]/2;
        cout<<sum<<endl;
    }
    return 0;
}