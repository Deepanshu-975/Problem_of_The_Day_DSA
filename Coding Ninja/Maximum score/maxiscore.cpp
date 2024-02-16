#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximizeScore(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end(), greater<int>());
    
    int score = 0;

    for (int i = 0; i < min(k, n); ++i)
    {
        score += arr[i];
    }

    return score;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << maximizeScore(arr, n, k) << endl;
    }

    return 0;
}
