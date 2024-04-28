#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  a,b,cnt=0;
  cin>>a>>b;
  for(ll  i=a;i<=b;i++) cnt++;
  cout<<cnt<<endl;
  return 0;
}