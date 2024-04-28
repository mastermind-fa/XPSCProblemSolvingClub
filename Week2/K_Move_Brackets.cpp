#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  ll  t;
  cin>>t;
  while(t--){
    ll  n,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    stack<char> q;
    for(ll  i=0;i<n;i++){
      if(!q.empty() && q.top()=='(' && s[i]==')'){
        cnt++;
        q.pop();
      }
      else q.push(s[i]);
    }
    ll  x=(n-cnt*2)/2;
    cout<<x<<endl;
  }
  return 0;
}