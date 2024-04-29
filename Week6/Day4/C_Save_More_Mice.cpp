#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		vector<int> v(k);
		for (int i = 0; i < k; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());

		int cnt = 0;
		ll sum = 0;

		while (cnt < v.size() && sum + n - v[cnt] < n)
		{
			sum += n - v[cnt++];
		}

		cout << cnt << endl;
	}
  return 0;
}