#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if(s == '+'){
        if(a + b == c)
            cout << "Yes";
        else
            cout << a + b;
    }
    else if(s == '-'){
        if(a - b == c)
            cout << "Yes";
        else
            cout << a - b;
    }
    else if(s == '*'){
        if(a * b == c)
            cout << "Yes";
        else
            cout << a * b;
    }
    return 0;
}
