#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    int arr1[5] = {0, 0, 4, 0, 5};
    

    // this is the dry code but we have to show it itself given array mean we have to rearrange the element in such a way that order will preserve and all zero come in right hand side
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr1[i] != 0)
    //     {
    //         arr2[k] = arr1[i];
    //         k++;
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    //shift all nonzero element to the left
    int nonzero=0;
    for (int j = 0; j < 5; j++)
    {
        if (arr1[j] != 0)
        {
            swap(arr1[j], arr1[nonzero]);
            nonzero++;
        }
        else {
            continue;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}