#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  k,s;
  cin>>k>>s;
  ll  cnt=0;
  for(ll  i=0;i<=k;i++){
    for(ll  j=0;j<=k;j++){
      ll  z=s-i-j;
      if(z>=0 && z<=k) cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}