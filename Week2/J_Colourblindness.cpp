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
    ll  n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    
    for(ll  i=0;i<n;i++){
      if((a[i]=='G' && b[i]=='B') || (a[i]=='B' && b[i]=='G')){
        a[i]='G';
        b[i]='G';
      }
      
    }
    (a==b) ? cout<<"YES\n" : cout<<"NO\n";
  }
  return 0;
}