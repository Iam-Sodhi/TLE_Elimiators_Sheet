#include <bits/stdc++.h>
using namespace std;
 

int main()
{	int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(auto it:s)mp[it]++;

        int odd=0;
        for(auto it:mp){
            if(it.second&1)odd++;
        }
        if(odd> k+1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}