#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[] = {5,4,3,2,1};
    for (int i = 0; i < n; i++)
    {
        int hr = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j]>hr)
        {   
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = hr;
        

        cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
    cout<< arr[i]<<" ";
    }
    cout<<"\n";
    }
    
    
    return 0;
}