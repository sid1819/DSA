#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void merge(int *arr, int s, int mid, int e)
{
    int i = s;
    int j = mid + 1;
    int k = s;
    int v[e] = {0};
    int cnt=0;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            v[k] = (arr[i]);
            k++;
            i++;
        }
        else
        {
            cnt++;
            v[k] = (arr[j]);
            k++;
            j++;
        }
    }
    if (i > mid)
    {
        while (j <= e)
        {
            v[k] = arr[j];
            k++;
            j++;
        }
    }
    else
    {
        while (i <= mid)
        {
            v[k] = arr[i];
            k++;
            i++;
        }
    }
    for (int i = s; i < e; i++)
    {
        arr[i] = v[i];
    }
}

void mergesort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    if (s < e)
    {
        mergesort(arr, s, mid);
        mergesort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }

    return 0;
}