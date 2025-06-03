#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n, sum = 0;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    cout << sum << endl;
    return 0;
}
