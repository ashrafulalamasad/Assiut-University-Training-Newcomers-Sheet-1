#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    char x;
    cin >> x;
    if(isdigit(x))
        cout << "IS DIGIT" << endl;
    else if(islower(x))
        cout << "ALPHA\nIS SMALL" << endl;
    else
        cout << "ALPHA\nIS CAPITAL" << endl;
    return 0;
}
