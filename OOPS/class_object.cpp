#include<bits/stdc++.h>
using namespace std;
class hero{

    //by default all data are private in class
    int health;
    string name; //this is the private it cannot be access outside the class
    public:  //this will make data type public means it they can be used anywhere inside the program
   
    int weapon;

    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health=h; 
    }
    string getstring()
    {
        return name;
    }
    void setstring(string s)
    {
        name=s;
    }
    hero()
    {
        cout<<"this is the constructor call"<<endl; 
    }

    hero (int health)
    {
        cout<<"this->"<<this<<endl;
        cout<<"this is the constructor call"<<endl;
        this->health=health;
    }


};
int main()
{
// hero ramesh;
// // when our data is public
// // ramesh.health=70;
// // cout<<"size of object "<<sizeof(ramesh)<<endl;
// // cout<<"health of the ramesh is: "<<ramesh.health<<endl;

// // when our data is private then we use the getter and setter function
// // use of the getter function 

// cout<<"ramesh health is :"<<ramesh.gethealth()<<endl;

// // use of the setter function
// ramesh.sethealth(80);
// cout<<"ramesh health after the uses of  setter function :"<<ramesh.gethealth()<<endl;



// static allocation
// hero a;
// a.sethealth(100);
// cout<<"health of the a is :"<<a.gethealth()<<endl;



// // dynamically allocation 
// hero *b=new hero;  //this is how we allocate the memory dynamically
// // by using arrow
// b->setstring("siddhant kharwar");
// cout<<"name of the player is: "<<b->getstring()<<endl;
 


// //  by using dot 
// (*b).setstring("siddhant kharwar");
// cout<<"name of the player is: "<<(*b).getstring()<<endl;


// constructor call
cout<<"hi.."<<endl;
hero ramesh(10);
cout<<"address of ramesh is: "<<&ramesh<<endl;
cout<<"health of the ramesh is: "<<ramesh.gethealth()<<endl;
cout<<"hello"<<endl;




}