#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  string s,t;
  ll  cnt=0;
  cin>>s>>t;
  auto it=s.begin();
  auto jt=t.begin();

  while(it!=s.end()){
    if(*it!=*jt) cnt++;
    it++;jt++;
  }

  cout<<cnt<<endl;
  return 0;
}