#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

int n, m;
bool valid(int x, int y)
{
    if(x == -1 or y == -1 or x == n or y == m)
        return false;
    return true;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    cin>>n>>m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    int mx=0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x=i,y=j,sum=0;
            while(valid(x,y)){
              sum+=a[x--][y--];
            }
            x = i, y = j, x++, y++;

            while (valid(x, y)) sum += a[x++][y++];
            x = i, y = j, x--, y++;
            while (valid(x, y))
              sum += a[x--][y++];

            x = i, y = j, x++, y--;
            while (valid(x, y))
              sum += a[x++][y--];

            mx = max(sum, mx);
        }
    }
    cout<<mx<<endl;

    
  }
  return 0;
}