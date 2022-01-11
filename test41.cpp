#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int nums[n];

        int oddCount = 0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            oddCount += x % 2 == 1;
            nums[j] = x;
        }
        if (abs(n - 2 * oddCount) > 1)
        {
            cout << -1 << '\n';
            continue;
        }

        int c = 0;
        if (2 * oddCount == n)
        {
            int c1 = 0;
            int c2 = 0;
            int mod1 = nums[0] % 2;
            int k = 2;
            int l = 0;
            for (int j = 1; j < n; j++)
            {
                if (nums[j] % 2 == mod1)
                {
                    c1 += abs(j - k);
                    k += 2;
                }
                else
                {
                    c2 += abs(j - l);
                    l += 2;
                }
            }
            c = min(c1, c2);
        }
        else
        {
            int mod1 = 2 * oddCount < n ? 0 : 1;
            int k = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[j] % 2 == mod1)
                {
                    c += abs(j - k);
                    k += 2;
                }
            }
        }
        cout << c << '\n';
    }
}