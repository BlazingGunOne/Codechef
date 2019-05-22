#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int A[n + 1], B[n + 1], C[n + 1], D[n + 1], E[n + 1];
        A[0] = 0; B[n] = 0; C[0] = 0; D[n] = 0;
        for(int i = 1; i <= n; i++) {
            cin >> A[i];
            C[i] = A[i] + C[i - 1];
        }
        for(int i = 0; i < n; i++) {
            cin >> B[i];
        }
        for(int i = n-1 ; i >= 0; i--) {
            D[i] = B[i] + D[i + 1];
        }
        int ans = INT_MIN;
        for(int i = 0; i <= n; i++) {
            E[i] = D[i] + C[i];
            //cout << E[i] << " ";
            ans = max(ans, E[i]);
        }
       cout << ans << endl;
       //cout << endl;
    }
    
}
