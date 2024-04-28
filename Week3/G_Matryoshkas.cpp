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
    ll n;
    cin>>n;
    map<ll,ll>mp;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
      mp[v[i]]++;
    }
    sort(v.begin(), v.end());
    ll len=0;
    for(auto i:v){
        ll cnt=0,x=i;
        while(mp[x]>0){
            mp[x]--;
            x++;
            cnt++;
        }
        if(cnt>0) len++;
    }
    cout<<len<<endl;
  }
  return 0;
}