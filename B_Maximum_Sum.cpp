#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
#define pb push_back
typedef long long ll;
#define endl '\n' // comment in case of interactive and (don't forget) use immediately after any cout

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k;
        cin >> k;
        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sort(arr, arr + n);

        ll leftsum = 0;
        for (int i = 0; i < (2 * k); i++)
        {
            leftsum += arr[i];
        }
        ll rightsum = 0;
        ll left = (2 * k) - 1;
        ll right = n - 1;
        ll mx = leftsum;
        while (1)
        {
            if (left == -1)
            {
                break;
            }
            rightsum += arr[right];
            leftsum -= arr[left] + arr[left - 1];
            right--;
            left = left - 2;
            mx = min(mx, leftsum + rightsum);
        }
        cout << sum - mx << endl;
    }

    return 0;
}
