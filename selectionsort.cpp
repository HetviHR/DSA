#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n] = {55,37,47,89,12,18};

    for(int i=0; i<n-1; i++) 
    {
        int smallest = i;
        for(int j=i+1; j<n; j++) 
        {
        if  (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        int temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
    cout<< arr[i]<<" ";
    }
    return 0;
}