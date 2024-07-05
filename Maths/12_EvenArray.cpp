#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while (t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int odd=0,even=0;
    for(int i=0; i<n; i++){
        if(i&1 && !(a[i]&1))odd++;
        if(!(i&1) &&(a[i]&1))even++;
    }
    if(odd==even)cout<<odd<<endl;
    else cout<<-1<<endl;
}
    return 0;
}