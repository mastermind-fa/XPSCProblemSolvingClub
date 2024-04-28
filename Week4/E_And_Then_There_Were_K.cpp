#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll L = __lg(n);
    ll A=(1<<L)-1;
    cout<<A<<endl;
  }
  return 0;
}