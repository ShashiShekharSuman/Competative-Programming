#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a, b, c;
        a = x / 3 + (x % 3 == 0 ? 0 : 1);
        b = (x % 3 == 0 ? 0 : 3 - x % 3);
        c = n - a - b;
        if (c < 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << a << " " << b << " " << c << endl;
    }
    return 0;
}
