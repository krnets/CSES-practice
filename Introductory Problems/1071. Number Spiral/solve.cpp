#include <iostream>
 
using namespace std;
using ll = long long;
 
void solve()
{
	int t;
	cin >> t;
 
	while (t--)
	{
		ll y, x;
		cin >> y >> x;
		ll mx = max(y, x);
		ll ans = (mx - 1) * (mx - 1);
 
		if (mx & 1)
		{
			if (mx == y)
				ans += x;
			else
				ans += 2 * x - y;
		}
		else
		{
			if (mx == x)
				ans += y;
			else
				ans += 2 * y - x;
		}
		cout << ans << "\n";
	}
}
 
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
 
	solve();
 
	return 0;
}