#include <bits/stdc++.h>
using namespace std;

bool reverseStr(int i, string str, int n)
{
    if (i >= n / 2)
        return true;

    if (str[i] != str[n - i - 1])
    {
        return false;
    }

    return reverseStr(i + 1, str, n);
}

int main()
{
    string str = "madsm";

    bool res = reverseStr(0, str, 5);
    if (res)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}