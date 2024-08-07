#include<iostream>
#include <math.h>
using namespace std;

int main(){
    
    int A[] = {101,908,421,579,615};

    int max=A[0];
    for (int i = 1; i < 5; i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }
    cout<<endl;
    //int h=0;
    for(int h=1;max/h>0;h=h*10)
    {   
        int b[10];
        for(int i=0;i<10;i++)
        {
            b[i] = 0;
        }

    //frequency
        for (int i = 0; i < 5; i++)
        {   
            int x=A[i]/h;
            
            b[x%10]++;
        }

        //preint frequency
        // cout<<"Frequency of all is: ";
        // for(int h=0;h<10;h++){
        //     cout<<b[h]<<"  ";
        // }
        
        cout<<endl;
        for (int i = 1; i < 10; i++)
        {
            b[i] = b[i] + b[i-1];
        }

        // cout<<"cumilitive sum is: ";
        // for(int h=0;h<10;h++){
        //     cout<<b[h]<<"  ";
        // }
        
        
        int c[5];
        //output array
        for (int i = 0; i < 5; i++)
        {   
            int y =A[i]/h;
            c[b[y%10]-1] = A[i];
            b[y%10]--;
        }
        cout<<endl;
        cout<<"Sorted array is :";
        //print first iteration
        for (int i = 0; i < 5; i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;

    }
    
    

    return 0;
}