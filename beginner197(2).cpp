#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
int main() {

  int H, W, X, Y;
  cin>>H>>W>>X>>Y;
  char grid[H][W];
  for(int i=0; i<H; i++) {
 
    for(int j=0;j<W;j++) {
    
      cin>>grid[i][j];
    }
  }
  int x = X-1;
  int y = Y-1;
  int count=0;
  int i=x;
  // for row decrease
  while(grid[i][y]=='.' && i>=0) {
  	if(i!=x) count++;
    i--;
  }
  // for row increase
  i=x;
  while(grid[i][y]=='.' && i<H){
  
    if(i!=x) count++;
    i++;
  }
  // for col decrease
  int j=y;
  while(grid[x][j]=='.' && j>=0) {
    if(j!=y) count++;
    j--;
  }
  // for col increase
 
  j=y;
  while(grid[x][j]=='.' && j<W) {
  
    if(j!=y) count++;
    j++;
  }
  count++;
  cout<<count;
}