#include <bits/stdc++.h>
using namespace std;
int main()
{	int n;
cin >> n;
    vector<int> a(n+1);
    unordered_map<int,int> mp;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    for(int i=1; i<=n; i++){
        cout<<mp[i]<<" ";
    }
    cout<<endl;
    return 0;
}   