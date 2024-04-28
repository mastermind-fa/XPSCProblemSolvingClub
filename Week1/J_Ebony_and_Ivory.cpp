#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  a,b,c;
  cin>>a>>b>>c;
  
  for (ll  i = 0; a * i <= c; ++i) {
      for (ll  j = 0; a * i + b * j <= c; ++j) {
          if (a * i + b * j == c) {
              cout << "Yes" << endl;
              return 0;
          }
      }
  }
  cout << "No" << endl;
  return 0;
}