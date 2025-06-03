#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;
    (s1 == s2) ? cout << "ARE Brothers" : cout << "NOT";
    return 0;
}
