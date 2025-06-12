#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll n;
    cin >> n;
    cout << n / 365 << " years" << endl;
    cout << (n % 365) / 30 << " months" << endl;
    cout << (n % 365) % 30 << " days" << endl;
    return 0;
}
