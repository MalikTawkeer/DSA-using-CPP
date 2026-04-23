#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        int min = i;
        for (int j = i; j <= size - 1; j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }

        swap(arr[min], arr[i]);
    }
}

int main()
{
    int arr[6] = {64, 25, 12, 22, 11, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}