#include<iostream>
using namespace std;


int n,i;

int count(int nums[], int size, int target)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
       if (nums[size] >= target)

       {
          ans++;
       }
       
    }
    return ans;
}
int specialArray(int arr[],int n)
{
     int left=0;
  int right=n;
  
  while (left <= right)
  {
    int mid = left + (right-left) /2;
    int ans = count(arr,n,mid);

    if (ans==mid)
     return mid;

    else if(ans>mid)
     left = mid+1;
    else
    right = mid-1;

  }
  return -1;

}
int main(){
    
    cout<<"Enter the number of elements of array you are going to enter: ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements of array in sorted manner: ";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int result = specialArray(arr,n);
   cout<<result;
return result;

}