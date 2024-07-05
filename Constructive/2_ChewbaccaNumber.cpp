#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long num = 0;
    int len=0;
    while (t >= 10)
    {
        int ld = t % 10;
        if (ld >= 5 && ld <= 9)
            ld = 9 - ld;
        num = num * 10 + ld;
        t /= 10;
        len++;
    }
        int ld = t % 10;
        if (ld >= 5 && ld <= 8)
            ld = 9 - ld;
        num = num * 10 + ld;
        t /= 10;
    len++;
  

    t = num;
    num = 0;
    while (t)
    {
        int ld = t % 10;
        num = num * 10 + ld;
        t /= 10;
    
    }
    long long n=num;
    while(n){
        len--; n/=10;
    }
    while(len-->0){ num = num * 10;}
    cout << num << endl;
    return 0;
}