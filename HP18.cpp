#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin >> t;
	while(t--) {
		ll n,a,b; cin >> n >> a >> b;
		ll ca = 0, cb = ca, cc = cb;
		for(ll i = 0; i < n; i++) {
			ll x; cin >> x;
			if (x % a == 0 && x % b == 0) {
				cc++;
			}
			else if (x % a == 0) {
				ca++;
			}
			else if (x % b == 0) {
				cb++;
			}
		}
		if (ca == cb && cc > 0)
			cout << "BOB" << endl;
		else if (ca == cb)
			cout << "ALICE" << endl;
		else if (ca > cb)
			cout << "BOB" << endl;
		else if (ca < cb)
			cout << "ALICE" << endl;
	}
}
