#include<iostream>
using namespace std;

int check_arr(int, int, int);
int main(){

    int n,k,count=0;
    
    
cout<<"enter number you want to enter: ";
cin>>n;

int arr[n];
check_arr(n,k,count)
{
if(n%2 == 0)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((arr[i]+arr[j])%k == 0)
            {
                count++;


            }
            
        }
        
    }
    
}
else
{
    cout<<"Pairs cannot be formed";
}

}
 
}