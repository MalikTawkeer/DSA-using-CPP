#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int arr[])
{
    int largest = arr[0];
    int sLargest = -1;

    for (int i = 1; i < 6; i++)
    {
        if (largest == arr[i])
            continue;

        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}

int main()
{
    int arr[6] = {10, 25, -12 - 6, 20, 20};

    cout << findSecondLargest(arr);
}