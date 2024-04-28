#include <bits/stdc++.h>
using namespace std;

ll  main()
{
    ll  t;
    cin >> t;
    while (t--)
    {
        ll  n;
        cin >> n;
        ll  c = 0;
        for (ll  i = 1; i <= n; i++)
        {
            ll  k;
            cin >> k;
            c = max(c, k - i);
        }
        cout << c << '\n';
    }
    return 0;
}