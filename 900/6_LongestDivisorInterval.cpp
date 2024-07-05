#include <bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n&1){ // n is odd.  it would not be multiple of any even number. means largest interval will be just one.
            cout<<1<<endl;
        }
        else{ // any n consecutive numbers  will be divisible always by some number from 1 to n
            int len=1;
            int i=2;
            while(true){
                if(n%i==0){
                    len++;
                }
                else{
                    break;
                }
                i++;
            }
            cout<<len<<endl;
            
        }

    }
    return 0;
}
