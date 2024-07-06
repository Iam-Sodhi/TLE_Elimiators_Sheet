#include <bits/stdc++.h>
using namespace std;
//For valid number to exist, it must be in power of 3^a * 6^b.
int main()
{	int t;
cin>>t;
while(t--){
    long long n;
    cin>>n; 

    int cnt=0;
    if(n==1)cout<<0<<endl;
  else if (n%3!=0)cout<<-1<<endl;
    else{
          //find it can be divided by 6 how many times
          int s=0;
          while(n%6==0){
            n=n/6;
            s++;
          }        
          //find if still has some multiples of 3
          int t=0;
          while(n%3==0){
            n=n/3; t++;
          }
          if(n!=1)cout<<-1<<endl; // it has some other division other than 3 or 6
          else cout<< s+ 2*t<<endl;
    }
}
    return 0;
}