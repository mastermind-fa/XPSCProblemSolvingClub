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
        string s;
        cin>>n>>s;
        int x=0,y=0,l=0,r=n-1;
        while(l<r){
            if(s[l]!=s[r]) x++;
            else y+=2;
            l++;
            r--;
        }
        string ans="";
        for(int i=0;i<=n;i++){ 
            int sum=i;
            sum-=x;
            if(sum<0){
                ans+="0";
                continue;
            }
            sum = max(sum%2, sum - y);
            sum = max(0, sum - (n % 2));

            if(sum==0) ans += '1';
            else ans += '0';
        }
        cout<<ans<<endl;
    }
    return 0;
}
