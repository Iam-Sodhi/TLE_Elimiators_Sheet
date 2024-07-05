#include <bits/stdc++.h>
using namespace std;
//max difference can be 1 
int main()
{	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(s[0]==s[n-1]){  //means the number of ab and ba are already equal, Observation
            cout<<s<<endl;  
        }
        else{
             char c= s[0]=='a'?'b':'a';
             s[0]=c;
             cout<<s<<endl;
        }
    }
    return 0;
}