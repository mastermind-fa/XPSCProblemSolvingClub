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
    vector<int> v(n);
    int X=0;
    for(int i=0;i<n;i++){
      cin>>v[i];
      X^=v[i];
    }
    int Y=0;
    for(auto c:v) Y^=c^X;
    (Y==0) ? cout<<X<<endl : cout<<-1<<endl;
  }
  return 0;
}