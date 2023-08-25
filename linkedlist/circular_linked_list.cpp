#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

//constructor
node(int d){
    this->data=d;
    this->next=NULL;
}
~node(){
    int value=this->data;
    if(this->next!=NULL)
    {
        delete next;
        next=NULL;
    }
}

};

void insertnode(node* &tail,int element,int d)
{
    if(tail==NULL)
    {
        node* newnode =new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else {
        //non emepty list
        //assuming that the element is present in the list
        node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(node* tail)
{
    node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp);
    cout<<endl;
}

bool detectloop(node *head)
{
    if(head==NULL)
    {
        return false;
    }
    map<node*,bool> visited;
    node *temp=head;

    while(temp!=NULL)
    {
        if(visited[temp]=true)
        {
            return true;
        }
        
            visited[temp]=true;
            temp=temp->next;
        
    }
    return false;
}
node*  detectloopnode(node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    map<node*,bool> visited;
    node *temp=head;

    while(temp!=NULL)
    {
        if(visited[temp]=true)
        {
            return  temp;
        }
        
            visited[temp]=true;
            temp=temp->next;
        
    }
    return NULL;
}
node* floyddetectloop (node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node* slow= head;
    node* fast=head->next;
    while(slow!=NULL && fast!=NULL)
    {
        fast= fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast)
        {
            return slow;
        }
    }
    return NULL;    
}
node* floyddetectloopnode (node *head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node* intersection= floyddetectloop(head);
    node* slow= head;
    node* fast=intersection;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
   
    return slow;    
}
void removeloop(node* head)
{
    if(head==NULL)
    return ;

    node *start=floyddetectloopnode(head);
    node *temp=start;
    while(temp->next!=start)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

//  remove dublicate from the sorted linked list
node * dublicate(node* head)
{
    if(head==NULL)
    {
        return NULL;
    }
    node* temp=head;
    node* curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL && curr->data==curr->next->data )
        {
            node* nextnode=curr->next;
            curr->next=nextnode->next;
            nextnode->next=NULL;
            delete nextnode;


        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
int main()
{
node* tail= NULL;
insertnode(tail,0,5);
print(tail);

insertnode(tail,5,6);
print(tail);


insertnode(tail,6,9);
print(tail);


insertnode(tail,6,8);
print(tail);


insertnode(tail,9,10);
print(tail);


}