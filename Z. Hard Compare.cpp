#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    double ab = b * log(a), cd = d * log(c);
    if (ab > cd)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
