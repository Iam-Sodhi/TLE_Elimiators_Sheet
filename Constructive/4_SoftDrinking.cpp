#include <bits/stdc++.h>
using namespace std;
int main()
{	int n, k, l, c, d, p, nl, np;
     cin>>n>>l>>k>>c>>d>>p>>nl>>np;
     int drink= k*l;
     int x= drink/(nl*n);
     int y= (c*d)/n;
     int z= p/(n*np);
     cout<<min(x,(min(y,z)))<<endl;
    return 0;
}