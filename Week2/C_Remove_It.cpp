#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  t,n;

  cin>>n>>t;
  vector<ll >v(n);
  for(ll  i=0;i<n;i++) cin>>v[i];
  v.erase(remove(v.begin(),v.end(),t),v.end());
  for(auto i:v) cout<<i<<" ";
  cout<<endl;
  return 0;

  
}