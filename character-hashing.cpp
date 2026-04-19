#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    map <int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char x;
        cin >> x;
        cout << map[x] << endl;
    }  
    return 0;
}