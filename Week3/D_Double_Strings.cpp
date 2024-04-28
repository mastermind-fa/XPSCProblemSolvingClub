#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        map<string,int> mp;

        
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        
        for(int i = 0; i < n; i++) {
            bool flag = false;
            string word = v[i];
            int len = word.size();
            for(int j = 1; j < len; j++) {  
                string a = word.substr(0, j);  
                string b = word.substr(j);     
                if (mp.count(a) && mp.count(b)) {  
                    flag = true;
                    break;
                }
            }
            cout << flag ;
        }
        cout<< endl;
    }
    return 0;
}
