#include <bits/stdc++.h>
using namespace std;
int main()
{	int n;
cin>>n;
  while(n--){
     string s,t;
     cin>>s>>t;
     int m=s.length();
     unordered_map<char,int> mp;
     for(auto it: t)mp[it]++;
 
      int len= t.length();
      int k=len-1;
      bool flag=true;
     for(int i=m-1;i>=0;i--){
          if(mp[s[i]]>0){
                if(s[i]!=t[k]){
                    flag=false;
                    break;
                }
                mp[s[i]]--;
                k--;
          }
          if(k<0)break;
     }
    if(!flag || k>=0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
    return 0;
}