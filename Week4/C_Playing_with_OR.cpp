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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans=0,l=0,r=0,odd=0;
    while(r<n){
        if( (v[r]&1) != 0) odd++;

            if( (r-l+1) == k )
            {
                if(odd) ans++ ;
                if((v[l]&1) !=0 )odd--;
                l++;
                 
            }
            r++;
        }
        cout << ans << endl;
    
    
  }
  return 0;
}