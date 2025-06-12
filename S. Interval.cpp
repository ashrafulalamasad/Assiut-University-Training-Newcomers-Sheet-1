#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    long double x;
    cin >> x;
    if (x >= 0 && x <= 25)
        cout << "Interval [0,25]" << endl;
    else if (x > 25 && x <= 50)
        cout << "Interval (25,50]" << endl;
    else if (x > 50 && x <= 75)
        cout << "Interval (50,75]" << endl;
    else if (x > 75 && x <= 100)
        cout << "Interval (75,100]" << endl;
    else
        cout << "Out of Intervals" << endl;
    return 0;
}
