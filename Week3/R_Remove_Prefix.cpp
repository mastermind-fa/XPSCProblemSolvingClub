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
    int n;
    cin>>n;
    vector<int> v(n),ans;
    for(int i=n-1;i>=0;i--) cin>>v[i];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        if(mp[v[i]]==2) break;
        ans.push_back(v[i]);
    }
    cout<<v.size()-ans.size()<<endl;
    }
  return 0;
}