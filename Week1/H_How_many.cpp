#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  s,t,cnt=0;
  cin>>s>>t;
  for(ll  i=0;i<=100;i++){
    for(ll  j=0;j<=100;j++){
        for(ll  k=0;k<=100;k++){
            if((i+j+k<=s) && (i*j*k<=t)) cnt++;
            }
    
    }
  }
  cout<<cnt<<endl;

  return 0;
}