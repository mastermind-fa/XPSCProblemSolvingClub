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
    int n,xor_val=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      xor_val=xor_val^arr[i];
    }
    int x=xor_val;
    for(int i=0;i<n;i++){
        x=min(x,(xor_val^arr[i]));
    }
    cout<<x<<endl;
  }
  return 0;
}