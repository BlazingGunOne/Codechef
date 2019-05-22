#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin >> n >> m;
    map<int, int> indexA;
    set<int> a;
    map<int, int> indexB;
    set<int> b;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        indexA[x] = i;
        a.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        indexB[x] = i;
        b.insert(x);
    }

    for(set<int>::iterator it = a.begin(); it != a.end(); it++) {
        cout << indexA[*it] << " " << indexB[*b.begin()] << endl;
    }

    set<int>::iterator itr = b.begin();
    advance(itr, 1);

    set<int>::iterator iter = a.begin();
    advance(iter, n - 1);

    for(set<int>::iterator i = itr; i != b.end(); i++) {
        cout << indexA[*iter] << " " << indexB[*i] << endl;
    }
}
