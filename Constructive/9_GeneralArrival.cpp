#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mini=INT_MAX; int minIdx=-1;
    int maxi=INT_MIN; int maxIdx=-1;

    for(int i = 0; i < n; i++){
        if(a[i]>maxi){
            maxi = a[i];
            maxIdx=i;
        }
        if(a[i]<=mini){ //we need last minimum in case of duplicates i.e. <= is used
            mini = a[i];
            minIdx = i;
        }
    }
    int len;
    if(maxIdx<minIdx){
        len= maxIdx+ (n-minIdx-1);
    }
    else  len =maxIdx+ (n-minIdx-1) -1;
    cout<<len<<endl;
    return 0;
}