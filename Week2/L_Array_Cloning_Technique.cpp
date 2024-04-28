#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  t;
  cin>>t;
  while(t--){
    ll  n,mx=ll _MIN;
    cin>>n;
    vector<ll > v(n);
    map<ll ,ll > mp;
    for(ll  i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
      mx=max(mx,mp[v[i]]);
    }
    if(n==mx) cout<<0<<endl;
    else{
        ll  x=n-mx;
        while(mx<n){
            mx*=2;
            x++;
        }
        cout<<x<<endl;
    }
  }
  return 0;
}