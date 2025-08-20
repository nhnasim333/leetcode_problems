#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; ++i)
            cin >> x[i];

        int left = x[0], right = x[n - 1];
        int ans = min(abs(s - left), abs(s - right)) + (right - left);
        cout << ans << endl;
    }
    return 0;
}