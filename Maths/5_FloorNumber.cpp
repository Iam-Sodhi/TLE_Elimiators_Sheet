#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while (t--)     
{
    int n,x;
    cin >> n>>x;
    n=n-2;
    if(n<=0)cout<<1<<endl;
    else{
        int f= n/x;
        if(n%x!=0)f++;

        f++; //for 1st floor
        cout<<f<<endl;
    }
}

    return 0;
}