 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {	unordered_map<string, int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    int n;
    cin>>n;
    string t;
    int ans=0;
    while(n--){
        cin>>t;
        ans+= mp[t];
    }
    cout<<ans<<endl;
    return 0;
 }