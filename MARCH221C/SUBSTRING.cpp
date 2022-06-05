#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int maxLen = -1, len = 0;
        cin >> s;
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] != s[0] && s[i] != s[s.size() - 1])
                len++;
            else
                len = 0;
            maxLen = max(len, maxLen);
        }
        if (maxLen)
            cout << maxLen << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
