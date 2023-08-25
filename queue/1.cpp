#include<bits/stdc++.h>
using namespace std;
class Queue{

    public:
    int *arr;
    int qfront;
    int rear;
    int size; 

    Queue(int size)  
    {
         
        qfront=0;
        rear=0;
       arr=new int[size];
    }
    void enqueue(int data)
    {
      if(rear==size)  
      {
        cout<<"queue is full"<<endl;
      }
      else{
        arr[rear]=data;
        rear++;
      }
    }
    int  dequeue()
    {
        if(qfront==rear)
        {
            return -1;
        }
        else {
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear)
            {
                qfront =0;rear=0;
            }
            return ans;
        }
    }
    bool isempty()
    {
        if(qfront==rear)
        {
           return true; 
        }
        else {
            return false;
        }
    }
    int front()
    {
        if(qfront==rear)
        {
            return -1;
        }
        else {
            return arr[qfront];
        }
    }
};
int main()
{
    
    Queue st(5);
   st.enqueue(5);
   st.enqueue(8);
   st.enqueue(3);
   st.enqueue(9);
   st.enqueue(4);
   cout<<st.front()<<endl;
   st.dequeue();
   cout<<st.front()<<endl;

for(int i = 0; i <4; i++)
{
     cout<<st.front()<<endl;
     st.dequeue();
}

}

