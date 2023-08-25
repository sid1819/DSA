#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copy value
    int mainarrayindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarrayindex++];
    }

     mainarrayindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {  
        second[i] = arr[mainarrayindex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainarrayindex++] = first[index1++];
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainarrayindex++] = second[index2++];
    }
}

void mergesort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    // leftt part sorting
    mergesort(arr, s, mid);

    // right part sorting
    mergesort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
int main()
{

int arr[5]={10,8,5,4,3};
// int arr[5]={3,0,6,1,5};

int n=5;
mergesort(arr,0,4);
for (int i = 0; i < n; i++)
{
     if(arr[i]==n-i)
     {
        cout<<arr[i]<<endl;
        break;
     }
}
 


    return 0;
}