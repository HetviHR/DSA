    #include<iostream>
    #include<stdlib.h>
    using namespace std;
    struct node{
        int data;
        struct node *link;
    };
    struct node *head,*ptr2;
    struct node *slow,*fast,*temp;
    void add_at_end(int value)
    {
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node *));
        temp->data=value;
        temp->link=NULL;
        if(head==NULL)
        {
            head=temp;
        }
        else
        {
        struct node *ptr=head;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
        }
    }
    struct node* reverse_LL(struct node *head)
        {
            struct node *curr=head,*prev=NULL,*next;
            while(curr!=NULL)
            {
                next=curr->link;
                curr->link=prev;
                prev=curr;
                curr=next;
            }
            return prev;
        }
        void printdata()
        {
            struct node *ptr1;
            ptr1=head;
            if(head==NULL)
            {
                cout<<"LL is empty";

            }
            else{
                while(ptr1!=NULL)
                {
                    cout<<ptr1->data<<" ";
                    ptr1=ptr1->link;
                }
                cout<<"\n";
            }
        }
        bool palindrome()
        {
            cout<<slow->data;
            cout<<endl<<slow->link->data;
        if (head == NULL || head->link == NULL) {
        return true;
    }
            struct node *prev_of_slow=NULL;
            slow=head;
            fast=head;
        while(fast!=NULL && fast->link!=NULL)
        {
            prev_of_slow = slow;
            slow=slow->link;
            fast=fast->link->link;
        }
        printdata();
        if (fast != NULL) 
        {
        slow = slow->link;
        }

        prev_of_slow = NULL;
        slow = reverse_LL(slow);
        printdata();
        struct node *first_half = head;
        struct node *second_half = slow;
           // printdata();
            bool result = true;
            
            while(slow !=NULL)
            {
              //  slow = slow -> link;
                if(first_half->data != slow->data )
                {
                    result = false;
                    break;
                }
                first_half = first_half->link;
                slow = slow->link;
            }

            second_half = reverse_LL(second_half);
            if (prev_of_slow != NULL) {
            prev_of_slow->link = second_half;
        }
        return result;
        }
    int main()
    {
        int n;
        cout<<"Enter how many times you want to add data:";
        cin>>n;
        for(int i=0;i<n;i++)
        {
        int p;
        cin>>p;
        add_at_end(p);
    }
    printdata();
    if (palindrome())
    {
        cout<<"is Palindrome";
    }
    else
    {
        cout<<"not";
    }
    }