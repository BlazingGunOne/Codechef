#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll A[n + 1], cumulative[n + 1];
        A[0] = 0,cumulative[0] = 0;
        for(ll i = 1; i <= n; i++) {
            cin >> A[i];
            cumulative[i] = cumulative[i - 1] + A[i];
        }
        ll yb,yc,mb,mc,db,dc;
        cin >> yb >> mb >> db >> yc >> mc >> dc;

        ll days = 0, year = cumulative[n];
        days += (year - cumulative[mb - 1] - db + 1);    // -1 is done because take days till previous month from cumulative
        days += (cumulative[mc - 1] + dc)   ;             // plus current
        days = days + year * (yc - yb - 1);
        for (int y = yb; y < yc; y++) {
            if (y % 4 == 0)
                days++;
        }
        cout << days << endl;
    }
}
