#include <bits/stdc++.h>
using namespace std;

void repair() {
    cout << "2" << endl;
}
int check (int mid) {
    cout << "1 " << mid << endl;
    int status; cin >> status;
    return status;
}
int solve (int c, int r1, int r2,int N) {
	int x;
	for (int i = 1; i <= r2; i++) {
        x = (i * r2);
		if (x >= N) {
			x = N;
		}

		int status = check(x);

		if (status == 1) {
			repair();
			break;
		}
	}
	return x;
}

int main() {
    int N, c;
    cin >> N >> c;
    int r,ans;
    r = ceil(sqrt(N));
    ans = solve(1, 0, r, N);
    /*cout << "Step1 ans: " << ans <<endl;
    cout << "r= " <<r <<endl;
    /*int r1 = r;
    r = ceil(sqrt(ans));
    ans = solve(ans, r1, r, N);
    cout << "Step2 ans: " << ans <<endl;*/
    int i;
    int r2 = floor(sqrt(r));

    if (N >= 120000 ) {
    for (i = ans - r + 1; i <= ans + r2; i += r2) {
        int status = check(i);

		if (status == 1) {
			repair();
			break;
		}
    }
    ans = i; r = r2;
    }

    for (i = ans - r + 1; i <= ans; i++) {
        int status = check(i);

		if (status == 1) {
			repair();
			break;
		}
    }

    cout << "3 " << i;
}
