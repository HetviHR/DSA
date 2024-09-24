#include <iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

};
struct Node* front;
struct Node* rear;

void enqueue(int val)
{
        Node* ptr = new Node(); 
    //ptr = (struct Node* )malloc(sizeof(struct Node));
    ptr->data = val;
    ptr->next = NULL;
    if(front == NULL)
    { 
        
        front = rear = ptr;
    }
    
    else
    {  
       // Node* temp = rear;  
        rear->next = ptr;
        rear = rear->next;
    }
}

void dequeue()
{
    if (front == nullptr)
    {
        cout<<"This is empty\n";
    }
    else if(front == rear)
    {
        Node* temp =  front;
        front = NULL;
        rear = NULL;
        delete temp;
    }
    else{
    Node* temp =    front;
    front =  front->next; 
    delete temp;
    }
}

void print()
{
    cout<<endl;
    cout<<"Hello i am in print\n";
    Node* f = front;
    Node* r = rear;
    while(f != NULL || f == r)
    {
        cout <<f->data <<"    ";
        f = f->next;
    }
}


int main()
{
    Node q;
    int ch,n;
    

    while(true)
    {
        cout<<"\nselect your choice: \n1.Enqueue \n2.Dequeue  \n3.Print"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter value you want to enter: ";
            cin>>n;
            
            enqueue(n);
            print();
            break;
        
        case 2:
            dequeue();
            print();
            break;

        case 3:
            print();
            break;
        default:
        exit(0);
        
        }

    }
}


