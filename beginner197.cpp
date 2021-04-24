#include<iostream>
#include<string>
using namespace std;
int main() {
	string S;
  cin>>S;
  char tmp = S[0];
  int n = S.length();
  S.push_back(tmp);
  S.erase(S.begin());
  cout<<S;
}

