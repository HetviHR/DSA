#include <iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

};
struct Node* head;


Node* reverseList() {
    
      // Initialize three pointers: curr, prev and next
    Node *curr = head, *prev = nullptr, *next;

    while (curr != nullptr) {

        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
 
void insert_at_end(int val)
{
    struct Node* newNode = new Node(); 
  //  newNode = (struct Node* )malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
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
}

void printList() {
        struct Node* temp = head;
        cout<<"\nThe Linked list is: ";
    if(head==NULL)
            {
                cout<<"LL is empty";
            
            }
    while (temp != NULL) {
        cout<<"  "<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {

    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    // Node* head = new Node(1);
    // head->next = new Node(2);
    // head->next->next = new Node(3);
    // head->next->next->next = new Node(4);
    // head->next->next->next->next = new Node(5);

    Node* head = NULL;
    insert_at_end( 2);
    insert_at_end( 3);
    insert_at_end( 1);
    insert_at_end( 4);
    insert_at_end( 5);

    cout << "Given Linked list:";
    printList();

    head = reverseList();

    cout << "\nReversed Linked List:";
    printList();

    return 0;
}
