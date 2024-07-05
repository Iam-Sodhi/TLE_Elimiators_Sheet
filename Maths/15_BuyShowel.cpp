#include <bits/stdc++.h>
using namespace std;
int main()
{	int k, r;
    cin>>k>>r;
    int cnt=1;
    int t=k;
    while(true){
        if(k%10==0  || (k%10==r)){
            break;
        }
        k+=t;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}