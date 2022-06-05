#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int count_x = 0, count_y = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
                count_x++;
            else
                count_y++;
        }
        if (abs(count_x - count_y) < 2)
            cout << "YES" << endl;
        else if (abs(count_x - count_y) == 2)
        {
            if (count_x % 2 > 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
