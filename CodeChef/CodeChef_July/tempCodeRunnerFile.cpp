#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, x;
		cin >> n >> x;
		vector<ll> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		ll l = lower_bound(a.begin(), a.end(), x) - a.begin();
		ll count = 0;
		ll res;
		for (int i = l; i < n; i++)
		{
			if (x < a[i])
			{
				while (x < a[i])
				{
					x = 2 * x;
					count++;
				}
				count++;
			}
			else
				count++;

			x = 2 * a[i];
		}
		count += l;
		res = count;

		if (l != 0)
		{
			count = 0;
			l--;
			for (int i = l; i < n; i++)
			{
				if (x < a[i])
				{
					while (x < a[i])
					{
						x = 2 * x;
						count++;
					}
					count++;
				}
				else
					count++;

				x = 2 * a[i];
			}
			ll res1 = count + l;
			cout << min(res1, res) << endl;
		}
		else
		{
			cout << res << endl;
		}
	}
}
