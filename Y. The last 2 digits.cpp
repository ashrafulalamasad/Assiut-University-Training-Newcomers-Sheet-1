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
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    int x = (a * b * c * d) % 100;
    if(x < 10){
        cout << 0 << x << endl;
    }
    else{
        cout << x;
    }
    return 0;
}
