#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  int n;
  cin>>n;
  string str;
  cin>>str;
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    int t,a,b;
    cin>>t>>a>>b;
    if(t==1){
      // condit 1
      swap(str[a-1], str[b-1]);
    } else{
      // condit 2
      string first;
      string second;
      string news;
      first=str.substr(0, n);
      second=str.substr(n, str.length());
      news=second.append(first);
      str=news;
    }
  }
  cout<<str;
}
