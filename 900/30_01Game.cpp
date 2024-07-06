#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
  while(t--){
    string s;
    cin>>s;
    int z=0,o=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')z++;
        else o++;
    }
     int moves=min(z,o);
     if(moves&1)cout<<"DA"<<endl;
     else cout<<"NET"<<endl;
  }
    return 0;
}