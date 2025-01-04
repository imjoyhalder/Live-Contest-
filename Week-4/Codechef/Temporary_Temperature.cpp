#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = INT_MAX, ans = INT_MAX;

    while (l <= r)
    {
        int m = (l + r) / 2;
        int ch = 0;
        int now_low = arr[0] - m;
        int high = arr[0] + m;

        for (int i = 0; i < N; i++)
        {
            int next_low = arr[i] - m;
            int next_high = arr[i] + m;

            if (high < next_low || now_low > next_high)
            {
                
                now_low = next_low;
                high = next_high;
                ch++;
            }
            else
            {   
                high = min(high, next_high);
                now_low = max(now_low, next_low);
                
            }
        }
        if (ch <= K)
        {   
            r = m - 1;
            ans = m;
            
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}