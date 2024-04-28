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
    ll  n;
    cin>>n;
    map<string,ll >m;
    string s[3][n];
    for(ll  i=0;i<3;i++){
      for(ll  j=0;j<n;j++){
        cin>>s[i][j];
        m[s[i][j]]++;
      }
    }
    for(ll  i=0;i<3;i++){
        ll  cnt=0;
        for(ll  j=0;j<n;j++){
            if(m[s[i][j]]==1){
                cnt+=3;
            }
            if(m[s[i][j]]==2){
                cnt++;
            }
        }
        cout<<cnt<<" ";
        
    }
    cout<<endl;

  }
  return 0;
}
