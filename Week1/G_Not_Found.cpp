#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 
ll  main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  string s,c="abcdefghijklmnopqrstuvwxyz";
  cin>>s;
  set<char>S;
  sort(s.begin(),s.end());
  for(auto i:s) S.insert(i); 
  for(auto i:c){
    if(S.find(i)==S.end()) {cout<<i<<endl;
    return 0;}
  }
  cout<<"None"<<endl;


  return 0;
}