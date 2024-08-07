#include<iostream>
using namespace std;
int top=-1;
int n=0;
int a[10];

bool isEmpty()
{
    if(top == -1)
    {   cout<<"stackk is emptyt";
        return true;
    }
    else 
    return false;
}

bool isFull()
{
    if(top>=n-1)
    {
        cout<<"Array is full";
        return true;
    }
    else{
        return false;
    }
}

void push(int val)
{

    if(top>=n){
        cout<<"\nm"<<"Overflow";
    }
    
    else{
        top++;
        cout<<"\n"<<"I am in push and print top:"<<top;
        a[top]=val;
        cout<<"\n"<<"I am in push and print top:"<<a[top];
    }
}

void pop()
{
    if(isEmpty)
    {
        cout<<"stack is empty";
    }
    else{
        cout<<"deleted element is:"<<a[top];
        top--;
    }
}

void peek()
{
    cout<<"Top element is: "<<a[top];
}




int main(){
    cout<<"enter the size of array";
    cin>>n;
    int ch;
    do
    {   
        cout<<"\n"<<"1.Push\n2.Pop\n3.peek\n4.print the array\n5.Exit\n";
        cout<<"Enter the n for doing operation: ";
        cin>>ch;
        cout<<"in start"<<top<<endl;
        switch (ch)
        {
            
        case 1:
            //push
            cout<<"Enter the value you want to push";
            int value;
            cin>>value;
            push(value);
            cout<<"in push"<<top;
            break;

        case 2:
            //pop
            pop();
            break;
        case 3:
            //peek
            peek();
            break;
        case 4:
            cout<<"\n"<<"The stack is:";
            for (int i = 0; i <=top; i++)
            {
                cout<<a[i]<<" ";
            }
            
            break;
        case 5:
            exit(0);

            break;
        
        default:
            break;
        }
    }while (ch);
    
    return 0;
    

}