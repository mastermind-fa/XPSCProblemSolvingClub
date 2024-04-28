#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long 

void S(string a, string b)
{
    if(a.size() > b.size())cout<<"<"<<endl;
    else if(a.size() < b.size())cout<<">"<<endl;
    else cout<<"="<<endl;

}
void L(string a,string b)
{
    if(a.size() > b.size()) cout << ">" << endl;
    else if(a.size() < b.size()) cout << "<" << endl;
    else cout << "=" << endl;
}
void M(string a, string b)
{
    if(a.size() > b.size()) cout << ">" << endl;
    else if(a.size() < b.size()) cout << "<" << endl;
    else cout << "=" << endl;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    string a,b;
    cin>>a>>b;

    map<string, int> mp = {{"S", 1}, {"M", 2},{"L",3} ,{"XL",4},{"XXL",5},{"XXXL",6}};

        char x = a[a.size() - 1];
        char y = b[b.size() - 1];

        if(x=='S' and  y == 'S') S(a,b);
        else if(x=='L' and  y  == 'L') L(a,b);
        else if(x=='M' and  y  == 'M') M(a,b);
        else if(x=='S' and y =='M') cout<<"<"<<endl;
        else if(x=='M' and y == 'S') cout<<">"<<endl;
        else if(x=='L' and y =='M') cout<<">"<<endl;
        else if(x=='M' and y == 'L') cout<<"<"<<endl;
        else if(x=='S' and y =='L') cout<<"<"<<endl;
        else if(x=='L' and y == 'S') cout<<">"<<endl;
        else cout<<"="<<endl;
  }
  return 0;
}