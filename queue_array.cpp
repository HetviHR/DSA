#include<iostream>
using namespace std;

class Queue
{
    public:
    int front, rear;
    int n;
    int a[];
    Queue(int size)
    {
        front = -1;
        rear = -1;
        n = size;
        for(int i=0;i < n; i++)
        {
            a[i] = 0;
        }
    }

    bool overflow()
    {
        return rear >= n-1;
    }

    bool underflow()
    {
        return front == -1;
    }

    void enqueue(int val)
    {
        if(overflow())
        {
            cout<<"\nOverflow condition";
        }
        else if(front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear++;
        }

        a[rear] = val;
    }

    void dequeue_1(){
    if(front == -1 || front > rear)
    {
        cout<<"\nUnderflow condition";
    }
    else if(front== rear)
    {
        int val = a[front];
        front = -1;
        rear = -1;
        cout<<"\nDeleted element is "<<val;
    }
    else
    {
        int val = a[front];
        front++;
        cout<<"\nDeleted element is "<<val;
    }
    }

    void dequeue_n()
    {
            if(front == -1 || front > rear)
    {
        cout<<"\nUnderflow condition";
    }
    else if(front== rear)
    {
        int val = a[front];
        front = -1;
        rear = -1;
        cout<<"\nDeleted element is "<<val<<endl;
    }
    else
    {
        for(int i=0;i<=rear; i++)
        {
            a[i] = a[i+1];
        }
        rear--;
        front--;
    }
    }
    
    void display()
    {
        cout << "\nThe stack is: ";
        for (int i = front; i <= rear; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    void peek()
    {
        cout<<"\nFront element is: "<<a[front];
    }
};

int main(){
    
    int n;
    cout<<"\nEnter the size of queue";
    cin>>n;

    Queue q(n);

    while(true)
    {
        cout<<"\n\n1.Enqueue\n2.Dequeue with 1\n3.Dequeue with n\n4.peek\n5.Display\n6.exit\n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
            int v;
            cout<<"Enter value for enqueue: ";
            cin>>v;
            q.enqueue(v);
            break; 

            case 2:
            q.dequeue_1();
            break; 

            case 3:
            q.dequeue_n();
            break; 

            case 4:
            q.peek();
            break; 

            case 5:
            q.display();
            break; 

            case 6:
            exit(0);
            break; 

            default:
            cout<<"\nInvalid choice\n";
        }
    }

    return 0;
}