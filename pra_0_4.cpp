#include<iostream>
using namespace std;
int key,n,i;
int j[15];
int main()
{
  cout<<"Enter the number of elements of array you are going to enter ";
  cin>>n;
  cout<<"Enter the elements of array in sorted manner";
  for(i=0;i<n;i++)
  {
    cin>>j[i];
  }
  int left=0;
  int right=n-1;
  cout<<"Enter the element you want to find";
  cin>>key;
  while(left<=right)
  {
    int mid = (left+right)/2;
    if(key<j[mid])
    {
       right=mid-1;
    }
    else if(key>j[mid])
    {
    
     left=mid+1;
    }
    else if(key==j[mid])
    {
      cout<<"The key is found at index "<<left<<endl; 
      break; 
    }
  }
  if(left>right)

  {
    cout<<"The key is not there in the entire array"<<endl;
  }
  return 0;
}