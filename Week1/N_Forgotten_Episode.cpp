#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  n;
  cin>>n;
  map<ll ,ll >m;
  for(ll  i=1;i<n;i++){
    ll  x;
    cin>>x;
    m[x]++;
  }
  for(ll  i=1;i<=n;i++){
    if(m[i]==0) cout<<i<<endl;
  }
  
  return 0;
}