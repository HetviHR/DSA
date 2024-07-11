#include<iostream>
using namespace std;
int main()
{
    int i,n,x;
    int count=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int x=0;x<n;x++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=x)
            {
                count++;
            }
        }
        if(x==count)
        {
            cout<<"X = "<<x;

        }
    }
    
       
    return -1;
    

}