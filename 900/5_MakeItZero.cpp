#include <bits/stdc++.h>
using namespace std;
int main()
{	//Observation=> To convert any even lenght subarray , we just need two operations to make all equal to zero.
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        if(!(n&1)){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl; 
            cout<<1<<" "<<n<<endl; //xor of same element (even times) gives zero
        }
        else{
            cout<<4<<endl;
            //first change even segment 1 to n-1  to zeroes.
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            //now to make last element to zero. again pick any even length segment from last
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}