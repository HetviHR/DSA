#include<iostream>
using namespace std;
class Stack {
public:
    int top;
    int n;
    char a[10];


    Stack(int size) {
        top = -1;
        n = size;
        for (int i = 0; i < n; ++i) {
            a[i] = 0;
        }
    }

    bool is_empty() {
        return top == -1;
    }

    bool is_full() {
        return top >= n - 1;
    }

    void push(int val) {
        if (is_full()) {
            cout<< "Overflow: Stack is full" << endl;
        } else {
            top++;
            a[top] = val;
        }
    }

    void pop() {
        if (is_empty()) {
            cout<< "Underflow: Stack is empty" << endl;
        } else {
            cout << "\nDeleted element is: " << a[top] << endl;
            top--;
        }
    }

    void peek() {
        if (is_empty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element is: " << a[top] << endl;
        }
    }

    void print_stack() {
        cout << "\nThe stack is: ";
        for (int i = 0; i <= top; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


int main(){

    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;

    Stack stack(n);

    
    
    // int n;
    // cout<<"Enter the value of parenthesis you want to enter: ";
    // cin>>n;
    if(n%2 != 0)
    {
        cout<<"Invalid parenthesis";
    }
    else
    {

    char temp[n];
    cout<<"Enter the data";
    for (int i = 0; i < n; i++)
    {   
        cout<<"Enter "<<i;  
        cin>>temp[i];
        
    }
    for(int i=0;i<n;i++){
    if(temp[i]== '{' || temp[i]== '(' || temp[i]=='[')
        {
        stack.push(temp[i]);
        cout<<"\npushing the data into stack" << temp[i];
        stack.print_stack();
        }
    else if(temp[i] == '}')
        {
        if(stack.a[stack.top] == '{')
            {
                stack.pop();
                //cout<<"Valid data";
            }
        else
            {
               // cout<<"Invalid data";
            }
        }
    else if(temp[i] == ')')
        {
        if(stack.a[stack.top] == '(')
            {
                stack.pop();
               // cout<<"Data is valid";
            }
        else
            {
                //cout<<"invalid data";
            }
        }
    else if(temp[i] == ']')
        {
        if(stack.a[stack.top] == '[')
            {
                stack.pop();
                //cout<<"Data is valid";
            }
        else
            {
                //cout<<"invalid data";
            }
        }
    else
        {
            cout<<"Doing nothing";
        }

    if(stack.top == 0)
    {
        cout<<"valid stack";
    }
    else
    {
        cout<<"invalid stack";
    }
    
    }
    return 0;
}
}