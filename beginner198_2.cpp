#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
  string string1;
  int i, length;
  int flag = 0;

  cin >> string1;
  
  length = string1.length();
  
  int c_zero=0;
  int x=1;
  while(string1[length-x]=='0'){
    c_zero++;
    x++;
  }
  for(int i=0; i<c_zero; i++){
    string1 = "0"+string1;
  }
  length = string1.length();
  
  for(i=0;i < length ;i++){
    if(string1[i] != string1[length-i-1]){
      flag = 1;
      break;
    }
  }

  if (flag) {
    cout <<"No" << endl; 
  }    
  else {
    cout <<"Yes" << endl; 
  }
  return 0;
}