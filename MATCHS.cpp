#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull x;

void solve(ull m, ull n) {
    if(m > n)
    	swap(m, n);
    if(n % m == 0) {
        x += 0;
     }
    else {
        if(n / m >= 2) {
            x += 0;
        }
        else {
            x += 1;
            solve(n - m, m);
        }
    return;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--) {
        ull n,m;
        cin >> n >> m;
        x = 0;
        solve(n, m);
        if(x % 2 == 0) {
            cout << "Ari" << endl;
        }
        else{
            cout << "Rich" << endl;
        }
    }
}