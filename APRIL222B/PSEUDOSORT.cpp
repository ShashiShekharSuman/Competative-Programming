#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, element, count = 0;
        vector<int> arr;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> element;
            arr.push_back(element);
            if (i > 0 && arr[i - 1] > arr[i])
            {
                swap(arr[i - 1], arr[i]);
                if (arr[i - 2] > arr[i - 1] && i >= 2)
                    count += 2;
                else if (i == 1)
                    count++;
                else
                    count++;
            }
        }
        if (count > 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
