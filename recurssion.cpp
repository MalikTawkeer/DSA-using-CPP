#include <bits/stdc++.h>
using namespace std;

void print(int count, int n)
{
    if (count < 1)
        return;

    cout << count << endl;
    print(count - 1, n);
}

// using parameterized way
void sumOfIstNNumbers(int n, int sum)
{
    if (n < 1)
    {
        cout << sum;
        return;
    }

    sumOfIstNNumbers(n - 1, sum + n);
}
// functional way
int sumOfIstNNumbersUsingFunction(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfIstNNumbersUsingFunction(n - 1);
}

// reverse an array using recursion
void reverseAnArr(int i, int arr[], int n)
{
    if (i > n / 2)
        return;

    swap(arr[i], arr[n - i - 1]);
    reverseAnArr(i + 1, arr, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    reverseAnArr(0, arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // sumOfIstNNumbers(n, sum);
    // cout << endl
    //      << sumOfIstNNumbersUsingFunction(n);
}