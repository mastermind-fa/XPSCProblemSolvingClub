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
    int n,x,y;
    cin>>n;
    int v[n][n-1];
    map<int,int>mp,mp2,id;
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n-1; j++){
        cin>>v[i][j];
        if(v[i][n-2]) mp[v[i][j]]++;
      }
    }

    for(int i = 0; i < n; i++){
        mp2[v[i][n - 2]]++;
        id[v[i][n - 2]] = i;
    }
    for(auto i: mp2){
        if(i.second == 1) x=i.first;
        else y = i.first;
    }
    vector<int> v2;

    for (int i = 0; i < n - 1; i++)
    {
        v2.push_back(v[id[x]][i]);
    }
    v2.push_back(y);

    for(int c:v2)cout<<c<<" ";
    cout<<endl;
      
  }
  return 0;
}