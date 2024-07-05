#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
while(t--){
    int a, b;
    cin>>a>>b;

    int x,y;
    if(a<b){x=a; y=b;}
    else {x=b; y=a;}

    int side= max(2*x,y);
    cout<<side*side<<endl;
}
    return 0;
}