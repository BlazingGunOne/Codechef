#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n; cin >> n;
    ll A[n], B[n];
    for (ll &i : A) {
        cin >> i;
    }
    sort(A, A + n);
    ll ans = LLONG_MIN;
    for (ll i = 0; i < n; i++) {
        B[i] = A[i] * (n - i);
        ans = max(ans, B[i]);
    }
    
    cout << ans;
}
