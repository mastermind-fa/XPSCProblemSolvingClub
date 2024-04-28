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
    ll two=1;
    while(two<n){
        two<<=1;
    }
    if(two==n) cout<<0<<" "<<n<<endl;
    else{
        two>>=1;
        cout<<(two^n)<<" "<<two<<endl;
    }
  }
  return 0;
}