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
    cin>>n;int O=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) {cin>>v[i];
      O |= v[i];
    }
    

    
    cout<<O<<endl;
  }
  return 0;
}