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
    ll n,sum=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='L') sum+=i;
        else if (s[i]=='R') sum+=n-i-1;
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            ll c =((n-i-1)-i);
            if(i<(n-i-1)) v.push_back(c);
        }
        else
            {
                ll c = (i - (n - i - 1));
                if( i > (n-i-1)) v.push_back(c);
            }
    }
    sort(v.begin(), v.end(),greater<>());
    for(int i=0;i<n;i++){
        if(i<v.size()) sum+=v[i];
        cout<<sum<<" ";
    }
    cout<<endl;
    


  }
  return 0;
}