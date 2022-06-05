#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    const long long mod = 998244353;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long Xor = 0, p = 1;
        string s;
        cin >> n >> s;
        vector<int> v(n, 0);
        long long X = s[0] - '0';
        v[0] = X;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '1')
                X += i + 1;
            v[i] = X % 2;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            Xor += v[i] * p;
            Xor %= mod;
            p *= 2;
            p %= mod;
        }
        cout << Xor << endl;
    }
    return 0;
}