#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b;
    char ch;
    cin >> a >> ch >> b;
    cout << ((ch == '+') ? a + b
           : (ch == '-') ? a - b
           : (ch == '*')   ? a * b
           : a / b) << endl;
    return 0;
}
