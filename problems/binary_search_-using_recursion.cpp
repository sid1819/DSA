#include <bits/stdc++.h>
using namespace std;
bool issorted(int arr[], int size)

{
    // base case:
    if (size == 0 || size == 1)

        return true;

    if (arr[0] > arr[1])
        return false;

    else
    {
        bool remainingpart = issorted(arr + 1, size - 1);
        return remainingpart;
    }
}


int sum(int arr[], int size){

if(size==1)
return arr[0]; 

int addition=*arr+ sum(arr+1,size-1);
return addition;
}

int linearsearch(int arr[],int key)
 {
    if(*arr==key)
    return *arr;

linearsearch(arr+1,key);

 }

int main()
{
    int arr[5] = {1, 4, 9, 7, 8};
    int size=5;
    bool ans=issorted(arr,size);
    if(ans)
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    int add=sum(arr,size);
    cout<<add<<endl;
    int key=2;
     int value=linearsearch(arr,key);
     cout<<value<<endl;
}
