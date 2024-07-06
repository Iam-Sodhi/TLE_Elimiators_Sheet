#include <bits/stdc++.h>
using namespace std;
// As elements are distinct we can just check for every window of size 3 to exist if global maxima exist
int main()
{	int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];

    int i=0;
    for(i=1;i<n-1;i++){
        if(a[i]>a[i-1]&& a[i]>a[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl; //1-indexing
            break;
        }
    }
    if(i==n-1)cout<<"NO"<<endl;

}
    return 0;
}