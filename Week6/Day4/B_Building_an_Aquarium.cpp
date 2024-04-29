#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
const int N= 1e9+7;


int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    ll l=0,r=2000000007;
    while(l<r){
        ll mid=l+(r-l+1)/2, total=0;
        for(int i=0;i<n;i++){
          total+=max(mid-v[i],0LL);
        }
        if(total<=x) l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;
    
  }
  return 0;
}
