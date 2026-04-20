#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 2, 3, 4, 3, 4, 4, 2, 4};

    // precompute
    map<int, int> mapp;
    for (int i = 0; i < 10; i++)
    {
        mapp[arr[i]] += 1;
    }

    // find the minimum frequency and maximum frequency
    int min_freq = INT_MAX;
    int max_freq = INT_MIN;
    for (auto it : mapp)
    {
        min_freq = min(min_freq, it.second);
        max_freq = max(max_freq, it.second);
    }
    cout << "Minimum frequency: " << min_freq << endl;
    cout << "Maximum frequency: " << max_freq << endl;
}