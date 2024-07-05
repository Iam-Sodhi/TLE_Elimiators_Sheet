#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
  while(t--){
    int l, r;
    cin>>l>>r;
    int x=l;
    int i=2;
    int y=i*l;
     if(y<=r){
        cout<<x<<" "<<y<<endl;
     }
     else cout<<-1<<" "<<-1<<endl;
  }
    return 0;
}