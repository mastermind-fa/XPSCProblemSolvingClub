#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
const ll  M = 1e18 + 7;
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  n;
  cin>>n;
  vector<ll>a(n);
  for(ll  i=0;i<n;i++) cin>>a[i];
  sort(a.begin(),a.end());
  ll sum=0,current=0,flag;
  for(ll  i=0;i<n;i++){
    current+=a[i];
    if(current%2==0) sum=current;
    
  }
  if(current>sum){
    for(ll  i=0;i<n;i++){
      if(a[i]%2!=0) {
        flag=a[i];
        break;
      }
    }
    sum=current-flag;

  }
  cout<<sum<<endl;
  return 0;
}