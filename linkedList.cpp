#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;

};

void printList(node*& head) {
        node* temp = head;
        cout<<"\nThe Linked list is: ";

    while (temp != NULL) {
        cout<<"  "<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

void insert_at_begin(node*& head, int val)
{   
    node* newNode = new node();
    if(head == nullptr)
    {  
        head = newNode;
    }
    else
    {
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    }
}
void insert_at_end(node*& head,int val)
{
    node* newNode = new node();
    newNode->data = val;
    if(head == nullptr)
    {  
        head = newNode;
    }
    else
    {  
        node* temp = head;  
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newNode;
    }
}


void delete_from_begin(node*& head)
{
    if(head == nullptr)
    {
        cout<<"this is empty\n";
    }
    else{
    node* temp = head;
    head = head->next; 
    free(temp);
    }
}

void delete_from_end(node*& head)
{   
    if(head == nullptr)
    {
        cout<<"this is empty\n";
    }
    else if(head->next == NULL)
    {
        node* temp = head;  
        free(temp);
        head = NULL;
    }
    else
    {
        node* ptr = head;  
        node* ptr1 = head->next;
        while(ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
            ptr = ptr->next;
        }
        ptr->next = NULL;
        cout<<"\nWill delete "<<ptr1->data;
        free(ptr1);

    }
    
}
int main(){
    
    node* head = nullptr;
    insert_at_end(head,  6);
    insert_at_end(head,  11);
    insert_at_begin(head,  84);
    insert_at_begin(head,  99);
    insert_at_end(head,  55);
   
     delete_from_begin(head);
     delete_from_end(head);

printList(head);
    return 0;
}