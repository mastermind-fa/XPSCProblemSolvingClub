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
    ll  a,b,c;
    cin>>a>>b>>c;
    if(a+b==c) cout<<"+"<<endl;
    else if(a-b==c) cout<<"-"<<endl;
    
  }
  return 0;
}