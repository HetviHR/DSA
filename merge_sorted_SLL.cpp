#include<iostream>
using namespace std;


struct Node {
public:
    int data;
    Node* next;
};
struct Node* head1 = nullptr;
struct Node* head2= nullptr;



void printList(Node*& head) {
        Node* temp = head;
        cout<<"\nThe Linked list is: ";

    while (temp != NULL) {
        cout<<"  "<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

void insert_at_end(Node*& head,int val)
{
    Node* newNode = new Node();
    newNode->data = val;
    if(head == nullptr)
    {  
        head = newNode;
    }
    else
    {  
        Node* temp = head;  
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newNode;
    }
   // printList(head);
}

Node* merge_SLL (Node *head1 ,Node *head2)
{
    Node* head3 = new Node();
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=head3;

while(ptr1 && ptr2){
    //ptr3->next = NULL;
    cout<<ptr1->data;
    cout<<ptr2->data;
    
    if(ptr1->data < ptr2->data)
    {
        cout<<endl<<"*********if********"<<endl;
        ptr3->next = ptr1;
        //coutdata;
        ptr1 = ptr1->next;
        
    }
    else
    {
        cout<<endl<<"*******else if*******"<<endl;
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        cout<<ptr3->data<<endl;
        //cout<<endl<<"*******else if 2nd*******"<<pdata<<endl;
    }
    
    ptr3 = ptr3-> next;
  //  merge_SLL(head1,head2);
    cout<<"\nin function\n";
    printList(head1);
    printList(head2);
    printList(head3);
    //return head3;
    if(ptr1)
{
    ptr3->next = ptr1;
}
if(ptr2)
{
    ptr3->next = ptr2;
}
}

return head3->next;
}

int main(){
    head1 = nullptr;
    head2 = nullptr;

    insert_at_end(head1, 2);
    insert_at_end(head1, 7);
    insert_at_end(head1, 9);
    insert_at_end(head1, 90);
    insert_at_end(head1,  97);
    insert_at_end(head1, 965);
    insert_at_end(head1, 7995);
    insert_at_end(head2, 3);
    insert_at_end(head2, 5);
    insert_at_end(head2, 8);
    insert_at_end(head2, 11);
    
    Node* merged_head =  merge_SLL(head1,head2);
    printList(merged_head);

    return 0;
}