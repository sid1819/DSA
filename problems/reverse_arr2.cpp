#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v) // we will reverse the array by function
{
    int s = 0, e = v.size()-1; //by modifying the initialisation of the s and e we can reverse any subarray  of the given array
    while (s <= e)
    {
        swap(v[s], v[e]);
        s=s++;
        e=e--; //updating the s ,e untill they become equal when they become equal then the loop will stop
    }
    return v;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << " " << v[i] << " ";
        cout << endl;
    }
}
int main()
{
  // master code basic using of stl

    vector<int> v; // defining a vector here
    v.push_back(11);
    v.push_back(5); // this line put the element in the vector by the end
    v.push_back(12);
    v.push_back(8);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5); // this line put the element in the vector by the end
    v.push_back(6);
    v.push_back(9);
    v.push_back(10);

    vector<int> ans = reverse(v);
    print(ans);

    
}