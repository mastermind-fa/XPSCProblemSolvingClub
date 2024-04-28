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
    for(int i=0;i<n;i++) cin>>v[i];
    ll sum=0,cnt=0;
    bool flag =false;
    for(int i=0;i<=n;i++){
      if(i<n) sum+=abs(v[i]);
      if(flag){
        if(i==n || v[i]>0){
          flag=false;
          cnt++;
        }
      }
      else{
        if(v[i]<0) flag=true;
      }
    }

    cout<<sum<<" "<<cnt<<endl;
    
  }
  return 0;
}