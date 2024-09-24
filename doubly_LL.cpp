#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev=NULL;
    Node* next=NULL;
};


void insert_at_begin(int val)
{
        Node* ptr = new Node();
        ptr->prev = NULL;
        ptr->data = val;
        ptr->next = NULL;

        if(head == NULL)
        {
            head= ptr;
        }
        else
        {
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
}


void insert_at_end(int val)
{
    Node* ptr = new Node();
    Node* temp;
        ptr->prev = NULL;
        ptr->data = val;
        ptr->next = NULL;
        temp = head;
        if(head == NULL)
        {
            head= ptr;
        }
        else
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp -> next = ptr;
            ptr->prev = temp;

        }
}

void insert_at_per_pos(int p, int val)
{
    p--;
    Node* ptr = new Node();
    Node* temp=head;
        ptr->prev = NULL;
        ptr->data = val;
        ptr->next = NULL;

    while(p != 1)
    {
        temp = temp->next;
        p--;
    }
    ptr->next = temp->next;
    ptr->prev = temp;
    temp->next = ptr;
    ptr->next->prev = ptr;
}

void delete_from_begin()
{
    
}

void delete_from_end()
{

}

void delete_from_per_pos(int p)
{

}

void print()
{

}

Node* head;

int main(){
    

    return 0;
}