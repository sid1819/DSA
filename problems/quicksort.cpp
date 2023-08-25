#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int partition(int *arr, int s, int e)
{
    int pv = arr[s];
    int i = s;
    int j = e;
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pv);

        do
        {
            j--;
        } while (arr[j] > pv);
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[s]);
    return j;
}
void quicksort(int *arr, int s, int e)
{

    if (s < e)
    {
        int q = partition(arr, s, e);
        quicksort(arr, s, q-1);
        quicksort(arr, q+1, e);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    
    quicksort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}