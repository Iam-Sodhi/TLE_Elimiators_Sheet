#include <bits/stdc++.h>
using namespace std;
int main()
{	int n, k;
    cin>>n>>k;
    priority_queue<int> pq;
    int t;
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        cin>>t;
       mp[t]++;
    }
    for(auto it: mp){
      pq.push(it.second);
    }
    n= ceil((double)(n)/2);

    int sum=0;
    while(n&& !pq.empty()){
        int t= pq.top(); pq.pop();
        if(t==1){
            sum+=t;
            n--;
            continue;
        }
         n= n- (t/2);
        sum+= t;
        if(t&1){
            sum--;
            pq.push(1);
        }

    }
    
    cout<<sum<<endl;

    return 0;
}