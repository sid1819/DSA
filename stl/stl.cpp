#include<bits/stdc++.h>
using namespace std;
int main()
{
  /*
  vector<int> v; 
vector<int> v2(5,0);  //this will tells us that size of the vecoter is 5 and initializes with zero;
cout<<v.size()<<endl;
cout<<"size-> "<<v.capacity()<<endl;  //capacity will tell how many space in vecotr (position)are there in the vector
v.push_back(1);
cout<<v.size()<<endl;
cout<<"size-> "<<v.capacity()<<endl;


v.push_back(5);
cout<<v.size()<<endl;
cout<<"size-> "<<v.capacity()<<endl;


v.push_back(8);
cout<<v.size()<<endl;
//v.size()-> this tell the number of the element in the vector 
cout<<"size-> "<<v.capacity()<<endl;

cout<<"elemnt at position 2 -> "<<v.at(2)<<endl;
cout<<"elemnt at position 2 -> "<<v[2]<<endl;
// two diffrent way to find the element 
cout<<v.front()<<" "<<v.back()<<endl;
// cout<<*v.begin()<<" "<<*v.end()<<endl;
// v.begin()->first iterator v.end()->last itretor

v.clear();
cout<<"size after the clear the element ->"<<v.size()<<endl;
// v.clear()-> this will delete the all element of the vector
*/

/*
// 2.deque
deque<int> d;
d.push_back(1);
d.push_front(7);
d.push_back(4);
for (int i = 0; i <d.size(); i++)
{
    cout<<d.at(i)<<" "<<d[i]<<endl;
}
 for(int i:d)
 {
    cout<<i<<" ";  //this will using itretor


 }
 cout<<endl;
 cout<<"size before erasing -> "<<d.size()<<endl;
cout<<"empty or not ->"<<d.empty()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"size after erasing -> "<<d.size()<<endl;
*/

/*
// 3.list  usng doubly linked list
list <int> l;
l.push_back(4);
l.push_back(2);
l.push_front(4);
for (int i:l)
{
    cout<<i<<" ";
}
cout<<endl;

l.erase(l.begin()); //it will not delete the range like deque
for(int i:l)
{
    cout<<i<<" ";
}
cout<<"size of the list -> "<<l.size()<<endl;
*/


/*
// 4stack  follow the LIFO arrangement last in first out concept;
stack<string> s;
s.push("siddhant");
s.push("kharwar");
s.push("shubham");
cout<<"top element of the stack -> "<<s.top()<<endl;
s.pop();
cout<<"top element of the stack -> "<<s.top()<<endl;
cout<<"size of the stack -> "<<s.size()<<endl;
cout<<"empty or not-> "<<s.empty()<<endl;
*/
/* 
// 5 queue  FIFO first in first out 

queue<string> q;
 q.push("siddhant");
 q.push("shubham");
 q.push("hemant");
 cout<<"first element -> "<<q.front()<<endl;
 q.pop();
 cout<<"first element -> "<<q.front()<<endl;
 cout<<"size after pop-> "<<q.size()<<endl;

*/

/* 
// 6 priority queue
// max heap min heap 

// max heap

priority_queue<int> maxi;

// min heap
priority_queue<int,vector<int>,greater<int>> mini;
maxi.push(4);
maxi.push(6);
maxi.push(5);
maxi.push(1);
 cout<<"size-> "<<maxi.size()<<endl;
 int n=maxi.size();
 for (int i = 0; i < n; i++)
 {
     cout<<maxi.top()<<" ";
     maxi.pop();
 }
 cout<<endl;
 cout<<"khali ho gya kya ?-> "<<maxi.empty()<<endl;
 
 mini.push(8);
 mini.push(12);
 mini.push(4);
 mini.push(11);
 int m=mini.size();
 for (int i = 0; i < m; i++)
 {
     cout<<mini.top()<<" ";
     mini.pop();
 }
 cout<<endl;
 cout<<"khali ho gya kya ?-> "<<mini.empty()<<endl;
 */

 
// 7.set
// 1.it will contain only the unique element ;
// 2.it will print it in the sorting order 

set<int> s;
s.insert(5);
s.insert(4);
s.insert(1);
s.insert(5);
s.insert(1);
s.insert(4);
int count=0;
for(int i:s)
{

    cout<<i<<" ";
    cout<<endl;

    count++;
    cout<<count<<endl;
}
cout<<endl;
set<int>::iterator it=s.begin();
it++;
s.erase(it);
s.erase(s.begin());
for(int i:s)
{
    cout<<i<<" ";
}
cout<<endl;
cout<<"count of 5 is -> "<<s.count(5)<<endl;
set<int>::iterator itr=s.find(5);
cout<<*itr<<endl;
for (auto i = itr; i!=s.end(); i++)
{
    cout<<*i<<" ";
}
cout<<endl;


/* 
//  8.map
//  key:value
map<int,string> m;
m[1]="babbar";
m[2]="love";
m[13]="kumar";
m.insert({5,"bheem"});
for (auto i:m) 
{
    cout<<i.first<<endl;
    cout<<i.first<<" "<<i.second<<endl;
}
// sm.count(i)  this will tell either i value present in the map ir  not give bool value according to this 
*/


// 9.binary search 
// vector<int> v;
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// cout<<binary_search(v.begin(),v.end(),2)<<endl;
// cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;

// cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

// rotate(v.begin(),v.begin()+1,v.end());
// for(int i:v)
// {
//     cout<<i<<" ";
// }




}