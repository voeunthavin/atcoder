#include<bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int findSmallest(int arr[], int n){
   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
int main() {
  int n;
  cin>>n;
  int arr1[n];
  int arr2[n];
  for(int i=0;i<n;i++) {
    cin>>arr1[i];
  }
  for(int j=0;j<n;j++) {
    cin>>arr2[j];
  }
  int count=0;
  int max1=largest(arr1, n);
  int max2=findSmallest(arr2, n);
  while(max1<=max2) {
    count++;
    max1++;
  }
  cout<<count;
}
