#include<iostream>
using namespace std;
int i;
int key;
int main()
{
    int a[10],pos=-1;
    int n;
    cout<<"Enter the number of elements you are going to enter";
    cin>>n;
    cout<<"Enter the key you want to find";
    cin>>key;
    cout<<"Enter the elements ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(a[j]==key)
        {
          cout<<"The key is found at the index no. "<<j<<endl;
            pos = j;
            break;
        }
        
    }

    if(pos==-1)
    {
        cout<<"The key is not found" <<endl;
    }
    return 0;
}