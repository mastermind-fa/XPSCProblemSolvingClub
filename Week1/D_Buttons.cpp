#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  a,b,c1,c2,c3;
  cin>>a>>b;
  c1=a+b;
  c2=a+a-1;
  c3=b+b-1;
  ll  coin=max(c1,max(c2,c3));
  cout<<coin<<endl;
  

  return 0;
}