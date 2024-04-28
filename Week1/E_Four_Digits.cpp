#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  n;cin>>n;
  string s=to_string(n);

  while(s.size()<4) s="0"+s;
  cout<<s<<endl;
  

  return 0;
}