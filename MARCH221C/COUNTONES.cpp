#include <bits/stdc++.h>
using namespace std;

void calculateSum(vector<long long> &sumVector, vector<long long> &power2)
{
    long long s = 0;
    double p = 0.5;
    sumVector.push_back(0);
    for (int i = 0; i < 50; i++)
    {
        p *= 2;
        s = 2 * s + p;
        power2.push_back(p);
        sumVector.push_back(s);
    }
}

void getSum(int n, long long k, long long i, int j, long long &sum, vector<long long> &sumVector, vector<long long> &power2)
{
    sum += j;
    if (i == k)
        return;
    if (k > i + power2[n - 1] - 1)
    {
        i += power2[n - 1];
        sum += sumVector[n - 1] + (j - 1) * (power2[n - 1] - 1);
        getSum(n - 1, k, i, j + 1, sum, sumVector, power2);
    }
    else
        getSum(n - 1, k, i + 1, j, sum, sumVector, power2);
}

int main()
{
    // your code goes here
    vector<long long> sumVector, power2;
    calculateSum(sumVector, power2);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k, sum = 0;
        cin >> n >> k;
        getSum(n, k, 1, 1, sum, sumVector, power2);
        cout << sum << endl;
    }
    return 0;
}
