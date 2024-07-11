#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n] = {1,2,3,6,5,4};

    for(int i=0; i < n-1; i++)
    {
        bool h=true;
        for (int j = 0; j < n-i-1; j++)
        {
            
            if(arr[j] > arr[j+1])

            { 
                cout<<"h";
                h=false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
            if(h == true)
        {
            break;
        }
        
        
    }
    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
    cout<< arr[i];
    cout<<" ";
    }
    
    return 0;
}