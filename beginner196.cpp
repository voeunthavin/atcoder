#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;

int a=0;
int* getBigInteger(string str) {
	int x = str.size();
  int* arr = new int[str.size()];
  while(a!=x) {
    	if(str[a]=='.') break;
    	arr[a]=str[a]-'0';
    	a++;
    }
  return arr;
}

int main(){
  string value;
  cin >> value;
  int* arr=getBigInteger(value);
  for(int i=0; i<a; i++) {
  	cout<<arr[i];
  }
  return 0;
}