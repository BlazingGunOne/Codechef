#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll c = 1000000007;

vector<int> A(2000000);

int init() {
    A[0] = 1;
    A[1] = 1;
    for(ll i = 2; i <= 2000000; i++)
        A[i] = -1;
}

ll fac(int n) {
    if(A[n] != -1)
        return A[n];
    ll f = ((n % c) * (fac(n - 1) % c) % c); 
    A[n] = f;
    return f;
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        /*ll p = 1;
        for(ll i = 1; i <= n; i++) {
            p = (p % c * (i + 1) % c) % c;
        }*/
    cout << fac(n + 1) - 1 << endl;
    }
}