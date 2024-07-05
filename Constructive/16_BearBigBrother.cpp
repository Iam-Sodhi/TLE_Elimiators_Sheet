#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int ans=0;
    while(true){
        if(a>b){
            break;
        }
        a= a*3;
        b=b*2;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}