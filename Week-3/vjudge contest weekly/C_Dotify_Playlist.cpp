#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;

        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int len, lang;
            cin >> len >> lang;
            if (lang == l)
            {
                pq.push(len);
            }
        }

        if (pq.size() < k)
        {
            cout << -1 << endl;
            continue;
        }

        long long length = 0;
        for (int cnt = 0; cnt < k; cnt++)
        {
            length += pq.top();
            pq.pop();
        }

        cout << length << endl;
    }

    return 0;
}
