#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  a,b,c,d=-1;
  cin>>a>>b>>c;
  for(ll  i=a;i<=b;i++){
    if(i%c==0){
        d=i;
        break;
    }
    
  }
  cout<<d<<endl;
  return 0;
}