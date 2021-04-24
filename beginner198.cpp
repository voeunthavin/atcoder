#include<iostream>
#include<string>
using namespace std;

int binomial_coefficient(int n, int m) {
  int res = 1;
  if(m>n-m)
    m=n-m;
  for(int i=0;i<m;++i){
    res*=(n-i);
    res/=(i+1);
  }
  return res;
}
int cal_ways(int m, int n) {
  if(m<n)
    return 0;
  int ways = binomial_coefficient(n+m-1, n-1);
  return ways;
}
int main() {
	
  int m;
  int n = 2;
  cin>>m;
 
  int result=cal_ways(m,n);
  if(m > 1)
  	printf("%d\n", result-2);
  else 
    printf("%d\n", result);
  return 0;
}