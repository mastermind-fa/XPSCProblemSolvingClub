#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll x,y,cnt=0;
  cin>>x>>y;
  ll current=x;
  while(current<=y){
    current*=2;
    cnt++;
  }
  cout<<cnt<<endl;

  return 0;
}