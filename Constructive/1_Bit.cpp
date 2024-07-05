#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
    cin >>t;
    int x=0;
    while (t--){
        string t;
        cin>>t;
        if(t[0]=='+'|| t[2]=='+') x++;
        else x--;
    }
    cout<<x<<endl;
    return 0;
}