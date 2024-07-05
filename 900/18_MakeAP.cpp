#include <bits/stdc++.h>
using namespace std;
int main()
{	int t;
cin >> t;
while(t--){
    int a,b,c;
    cin >> a>>b>>c;

    if(2*b == (a+c))cout<<"YES"<<endl;
    else if( (2*b -c )%a==0  &&  ((2*b -c )/a)>0)cout<<"YES"<<endl; //  a*m  b   c    -> 2b= a*m +c 
    else if( (a+c)%(2*b)==0)cout<<"YES"<<endl; // a  m*b c  -> 2b*m =a +c
    else if(((2*b -a)%c)==0 && ((2*b -a )/c)>0)cout<<"YES"<<endl; // a  b  c*m
    else cout<<"NO"<<endl; 
}
    return 0;
}