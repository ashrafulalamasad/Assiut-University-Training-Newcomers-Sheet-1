#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    ll start = max(l1, l2);
    ll end = min(r1, r2);
    if(start <= end){
        cout << start << " " << end;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}
