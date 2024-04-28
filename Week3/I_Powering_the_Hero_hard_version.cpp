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
    ll n,a=0;
    cin>>n;
    priority_queue<ll> pq;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x!=0) pq.push(x);
        else if(x==0 && pq.size()>0) a+=pq.top(),pq.pop();
    }
    cout<<a<<endl;
    
    
  }
  return 0;
}