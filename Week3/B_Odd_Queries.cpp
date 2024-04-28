#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  t;
  cin>>t;
  while(t--){
    ll  n,q;
    cin>>n>>q;
    vector<ll > v(n),x(n),y(n);
    for(ll  i=0;i<n;i++) cin>>v[i];
    x[0]=v[0];
    for(ll  i=1;i<n;i++) x[i]=x[i-1]+v[i];
    y[n-1]=v[n-1];
    for(ll  i=n-2;i>=0;i--) y[i]=y[i+1]+v[i];
    while(q--){
        ll a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        ll sum=((b-a)+1)*c;
        sum+=x[n-1]-x[b];
        if(a>0){
            a--;
            sum+=x[a];
        }
        (sum%2==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
  }
  return 0;
}