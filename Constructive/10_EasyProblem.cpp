#include <bits/stdc++.h>
using namespace std;
int main()
{	int n;
    cin>>n;
    vector<int> a(n);
    bool f=true;
    for(int i=0; i<n; i++){cin>>a[i];  if(a[i])f=false;}
    if(f)cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
}