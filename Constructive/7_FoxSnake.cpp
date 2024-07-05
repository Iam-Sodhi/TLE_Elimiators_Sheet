#include <bits/stdc++.h>
using namespace std;
int main()
{	int n,m;
    cin>>n>>m;
    string hash(m,'#');
    string odd(m,'.');
    odd[m-1]='#';
    string even(m,'.');
    even[0]='#';
    vector<string> ans(n,hash);
    int j=1;
    for(int i=1;i<n;i+=2){
        if(j&1){ans[i]=odd;j=0;}
        else {ans[i]=even;j=1;}
    }

    for(auto it: ans){
        cout<<it<<endl;
    }
    return 0;
}