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
    // bubble sort this is the algorithm plus code
    for (int i = 0; i < n - 1; i++)

    { bool swapped= false;
        // for (int j = 0; j < n -1; j++)
         for (int j = 0; j < n -i; j++)
        //  this process the index to n-i index;
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            // already sorted array
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
         cout<<" "<<arr[i]<<" ";
    }
    
}