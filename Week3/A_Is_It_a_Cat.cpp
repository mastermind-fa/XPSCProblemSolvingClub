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
    string s,x="meow",y="";	
    cin>>s;
    for(ll  i=0;i<n;i++){
        s[i]=tolower(s[i]);
        s[i+1]=tolower(s[i+1]);
        if(s[i]!=s[i+1]) y+=s[i];
        
    }
        (x==y) ? cout<<"YES\n" : cout<<"NO\n";

  }
  
  return 0;
}