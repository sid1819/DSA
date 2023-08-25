#include <bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[], int s, int e, int k)
{
    // base case
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return binarysearch(arr, mid + 1, e, k);
    }

    else
    {
        return binarysearch(arr, s, mid - 1, k);
    }
}
int main()
{
}