#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void maxheapify(int *arr, int i, int size)
{

    int left = 2 * i;
    int right = (2 * i) + 1;
    int largest = i;
    if (left <= size && arr[left] > arr[i])
    {
        largest = left; // updating the largest
    }
    if (right <= size && arr[right] > arr[largest])
    {
        largest = right; // updating the largest
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxheapify(arr, largest, size); // this line for checking the further
    }
}
void buildmaxheap(int *arr, int size)
{
    int heapsize = size;
    for (int i = size / 2; i > 0; i--)
    {
        maxheapify(arr, i, size);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int s;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    buildmaxheap(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
