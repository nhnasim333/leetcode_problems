#include <bits/stdc++.h>
using namespace std;

bool is_meowing(const string &s)
{
    string pattern = "meow";
    int p = 0, n = s.size();
    for (int i = 0; i < 4; ++i)
    {
        if (p >= n)
            return false;
        char target = pattern[i];
        int start = p;
        while (p < n && (tolower(s[p]) == target))
            ++p;
        if (p == start)
            return false;
    }
    return p == n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (is_meowing(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}