#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
// traversing logic will be same
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertatposition(node *&tail, node *&head, int position, int d)
{

    node *temp = head;
    int cnt = 1;

    // insert at start
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }  

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating a node for d;
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

void deletenode(int position,node* &head)
{   
    if(position==1)
    {
        node *temp=head;
        head=head->next;
        //memory free start node
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        node* curr=head;
        node* prev=NULL;

        int cnt=1;
        while(cnt < position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }


        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    node *node1 = new node(10); //ye line node1  nam ka ek node pointer n node bna tdeti h jisme 10 as data jata h 
    cout << node1->next << endl;  
    cout << node1->data << endl; //tail me node1 ka address

    // head pointer to node1
    node *head = node1; // head me node1 ka address 
    node *tail = node1; //tail me node1 ka address

    insertathead(head, 12); // this is insertion at head
    print(head);

    insertattail(tail, 15); // this is the insertion at tail
    print(head);

    insertatposition(tail, head, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deletenode(3,head);
    print(head);
}