#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    float n;
    cin >> n;
    int x = ceil(n);
    if(x == n)
        cout << "int " << (int)n << endl;
    else
        cout << "float " << (int)n << " " << fixed << setprecision(3) << n - (int)n << endl;
    return 0;
}
