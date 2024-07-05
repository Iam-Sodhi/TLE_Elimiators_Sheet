#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while (t--) 
{
    long long a, b,n;
    cin >> a >> b >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++)cin>>arr[i];
    long long ans=b;
    for(int i=0; i < n; i++){
        if(arr[i]<a)ans+= arr[i];
        else {
            ans+= (a-1);
        }
    }
    cout<<ans<<endl;
}

    return 0;
}