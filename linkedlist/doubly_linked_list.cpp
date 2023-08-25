#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// INSERTION AT THE HEAD

void insertathead(node *&head, int d)
{

    node *temp = new node(d);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

// insertion at the tail
void insertattail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// gives the length of the linked list

int getlength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// INSERTION AT ANY POSITION IN THE MIDDLE OF THE LINKED LIST

void insertatposition(int position, node *&head, node *tail, int d)

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
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void deletenode(int position, node *head)
{
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;  //here is the some defect  find it 

        delete temp;
        return;
    }
    else
    {
        // deleting any middle node or last node
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    insertathead(head, 15);
    print(head);

    insertattail(tail, 22);
    print(head);
    insertattail(tail, 17);
    print(head);

    insertatposition(3, head, tail, 20);
    print(head);

    insertatposition(1, head, tail, 5);
    print(head);

    insertatposition(6, head, tail, 28);
    print(head);

    deletenode(1, head);
    print(head);
    cout << "length of the doubly linked list is " << getlength(head) << endl;
}