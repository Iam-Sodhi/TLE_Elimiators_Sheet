#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        map<pair<int,int>,int> mp, mp2;
        //first store the all positions from which knight can attack king and queen in two sets
        mp[{x1+a,y1+b}]=1;
        mp[{x1+a,y1-b}]=1;
        mp[{x1-a,y1+b}]=1;
        mp[{x1-a,y1-b}]=1;
        mp[{x1+b,y1+a}]=1;
        mp[{x1+b,y1-a}]=1;
        mp[{x1-b,y1+a}]=1;
        mp[{x1-b,y1-a}]=1;

        mp2[{x2+a,y2+b}]=1;
        mp2[{x2+a,y2-b}]=1;
        mp2[{x2-a,y2+b}]=1;
        mp2[{x2-a,y2-b}]=1;
        mp2[{x2+b,y2+a}]=1;
        mp2[{x2+b,y2-a}]=1;
        mp2[{x2-b,y2+a}]=1;
        mp2[{x2-b,y2-a}]=1;
      
      
       int cnt=0;
       //Now check all those positions for x2,y2  and find intersection i.e. the answer
       for(auto it: mp){
          auto p= it.first;
          if(mp2.count(p))cnt++;
       }
       cout<<cnt<<endl;


    }
    return 0;
}