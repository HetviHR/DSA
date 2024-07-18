
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
  int a[5] = {91,55,47,98,100};
  
  for(int i=1;i<5;i++){
    int   key = a[i];
    int  j = i-1;
      while(j>=0 && a[j]>key)
      {
          a[j+1] = a[j];
          j = j-1;
      }
      a[j+1] = key;
  }
  
  for(int i=0;i<5;i++){
      cout<<a[i]<<" ";
  }

    return 0;
}