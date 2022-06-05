#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

void maxMexPath(int i, int p, const vector<vector<int>> &adj, int &maxMex, const vector<int> &value, vector<int> &count, set<int> &s)
{
    count[value[i]]++;
    if (s.find(value[i]) != s.end())
        s.erase(value[i]);
    maxMex = max(maxMex, *s.begin());
    for (auto j : adj[i])
        if (j != p)
            maxMexPath(j, i, adj, maxMex, value, count, s);
    if (--count[value[i]] == 0)
        s.insert(value[i]);
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxMex = 0;
        cin >> n;
        vector<int> value, count(n + 1, 0);
        vector<vector<int>> adj(n);
        set<int> s;
        for (int i = 0; i < n + 1; i++)
            s.insert(s.end(), i);
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            value.push_back(element);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x - 1].push_back(y - 1);
            adj[y - 1].push_back(x - 1);
        }
        maxMexPath(0, -1, adj, maxMex, value, count, s);
        cout << maxMex << endl;
    }
    return 0;
}
