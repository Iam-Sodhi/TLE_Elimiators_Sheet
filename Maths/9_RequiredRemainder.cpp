#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while(t--){
    int x,y,n;
    cin >> x >> y >> n;
    int temp= (n-y)/x;
    int ans= temp*x + y;
    cout<<ans<<endl;
}
    return 0;
}

