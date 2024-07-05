#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin>>t;
  while(t--){
    int n;
    vector<int>a(3);
    for(int i=0; i<3; i++)cin>>a[i];
    cin>>n;
    sort(a.begin(), a.end());
    int sum=a[2]-a[1];
    sum+= a[2]-a[0];
    int t= n-sum;
    if(t>=0 && t%3==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }
    return 0;
}