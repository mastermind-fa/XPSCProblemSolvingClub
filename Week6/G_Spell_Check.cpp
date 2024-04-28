#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  t;
  cin>>t;
  string s="Timur";
  sort(s.begin(), s.end());
  while(t--){
    ll  n;
    cin>>n;
    string a;
    cin>>a;
    if(n!=5) cout<<"NO\n";
    else{
        sort(a.begin(),a.end());
        if(a==s) cout<<"YES\n";
        else cout<<"NO\n";
    }

  }
  return 0;
}