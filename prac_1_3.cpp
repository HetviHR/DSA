#include <iostream>
using namespace std;

int main()
{
    int n,count,left,right,key,index;

    cout<<"Please enter the number you want to enter";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array.";
    for (int i = 0; i < n; i++)
    {   
        
        cin>>arr[n];
    }
    left = 0;
    right = n;

    
    cout<<"please enter the value you want to find";
    cin>>key;
while(left <= right){
    int mid = (left + right)/2;
    if (arr[mid] == key)
    {
      index = mid;
    }
    else if(arr[mid] < key)
    {
        left = mid+1;
        
    }
    else
    {
       right = mid-1;
    }
    
}
cout<<"index of that is "<<left;
}