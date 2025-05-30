#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll heal;
        cin >> n >> heal;
        ll best1 = LLONG_MAX, best2 = LLONG_MAX;
        for (int i = 0; i < n; ++i)
        {
            ll s, d;
            cin >> s >> d;
            if (s == 1)
                best1 = min(best1, d);
            else if (s == 2)
                best2 = min(best2, d);
        }

        ll ans = LLONG_MAX;

        if (best1 < LLONG_MAX)
        {
            ll need = (heal + best1 - 1) / best1;
            ans = min(ans, need);
        }

        if (best2 < LLONG_MAX)
        {

            ll max2 = (heal + best2 - 1) / best2;
            for (ll x = 0; x <= max2; ++x)
            {
                ll dmg2 = x * best2;
                ll rem = max(0LL, heal - dmg2);
                ll time = 2 * x;
                if (rem > 0)
                {
                    if (best1 == LLONG_MAX)
                        continue;
                    ll y = (rem + best1 - 1) / best1;
                    time += y;
                }
                ans = min(ans, time);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
