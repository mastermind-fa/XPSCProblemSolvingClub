#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll  main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll  t;
    cin >> t;
    while (t--) {
        ll  n;
        cin >> n;
        ll  a[n];
        for (ll  i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (ll  i = 0; i < n; i++) {
            ll  c;
            cin >> c;
            char b;
            for (ll  j = 0; j < c; j++) {
                cin >> b;
                if (b == 'D') {
                    if (a[i] == 9) a[i] = 0;
                    else a[i]++;
                }
                else if (b == 'U') {
                    if (a[i] == 0) a[i] = 9;
                    else a[i]--;
                }
            }
        }
        for (ll  i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
