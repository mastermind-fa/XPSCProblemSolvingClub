#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll l = 0, r = 0, cnt = 0;
        set<ll> s;
        vector<ll> v;
        
        while (r < n) {
            s.insert(arr[r]);
            if (r - l + 1 < k) {
                r++;
            } else {
                ll mx = *s.rbegin();
                if (mx <= q) {
                    cnt++;
                } else {
                    v.push_back(cnt);
                    cnt = 0;
                }
                s.erase(arr[l]);
                l++;
                r++;
            }
        }
        
        v.push_back(cnt); 
        
        ll ans = 0;
        for (int i = 0; i < v.size(); i++) {
            ans += (v[i] * (v[i] + 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
