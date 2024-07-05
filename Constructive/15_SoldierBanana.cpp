#include <bits/stdc++.h>
using namespace std;
int main()
{	int k,n,w;
    cin>>k>>n>>w;
    int req= k*(w*(w+1)/2);
    if(n>=req)cout<<0<<endl;
    else cout<<req-n<<endl;
    return 0;
}