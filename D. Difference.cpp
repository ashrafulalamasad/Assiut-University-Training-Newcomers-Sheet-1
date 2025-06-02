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
    cout << "Difference = " << (a * b - c * d);
    return 0;
}
