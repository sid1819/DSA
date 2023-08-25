#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--) // we will traverse the array in the reverse order
        {
            if (arr[j] > temp)
            { // shifting is occuring here
                arr[j + 1] = arr[j];
            }
            else
            { // ruk jao
                break;
            }
        }
        arr[j+1] = temp; //this is very important line try to understand it 
    }
    for (int i = 0; i < n; i++)
    {
         cout<<" "<<arr[i]<<" ";
    }
    
}