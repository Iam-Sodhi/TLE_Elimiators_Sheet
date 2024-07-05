#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> mat(5, vector<int>(5, 0));
    int a, b;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j])
            {
                a = i;
                b = j;
            }
        }
    }

    int moves=0;
    moves+= abs(2-a);
    moves+= abs(2-b);
    cout<<moves<<endl;

    return 0;
}