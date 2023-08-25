#include <bits/stdc++.h>
using namespace std;


// master function for reverse the array
vector<int> reverse(vector<int> v) // we will reverse the array by function
{
    int s = 0, e = v.size()-1;
    while (s <= e)
    {
        swap(v[s], v[e]);
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
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // // for (int i = 0; i < (n / 2); i++) // limit will be <n/2 it will cover all the case
    // // {
    // //     // int temp=arr[i];
    // //     // arr[i]=arr[n-1-i];
    // //     // arr[n-1-i]=temp;
    // //     swap(arr[n - 1 - i], arr[i]); // this one can also be use as swapping
    // // }

    // // 2.algorithm
    // // int start = 0;
    // // int end = n - 1;

    // // while (start<=end)
    // // {
    // //     swap(arr[start],arr[end]);
    // //     start = start + 1;
    // //     end = end - 1;
    // // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << " " << arr[i] << " ";
    // }

    // master code basic using of stl

    vector<int> v; // defining a vector here
    v.push_back(11);
    v.push_back(5); // this line put the element in the vector by the end
    v.push_back(12);
    v.push_back(8);
    v.push_back(1);

    vector<int> ans = reverse(v);
    print(ans);

    return 0;
}
 