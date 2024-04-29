#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n, q;
    cin >> n >> q;
    vector<long long> v;
    v.push_back(0);
    vector<int> vmax;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(v.back()+x);
        if(i == 0)
        {
            vmax.push_back(x);
        }
        else
        {
            vmax.push_back(max(vmax.back(), x));
        }
    }
    for(int i = 0; i < q; i++)
    {
        int k;
        cin >> k;
        int ind = upper_bound(vmax.begin(), vmax.end(), k)-vmax.begin();
        cout << v[ind] << " ";
    }
    cout << endl;
  }
  return 0;
}