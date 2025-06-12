#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    long double x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
        cout << "Origem" << endl;
    else if (x == 0)
        cout << "Eixo Y" << endl;
    else if (y == 0)
        cout << "Eixo X" << endl;
    else if (x > 0 && y > 0)
        cout << "Q1" << endl;
    else if (x < 0 && y > 0)
        cout << "Q2" << endl;
    else if (x < 0 && y < 0)
        cout << "Q3" << endl;
    else
        cout << "Q4" << endl;
    return 0;
}
