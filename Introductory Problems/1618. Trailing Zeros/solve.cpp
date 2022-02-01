#include <iostream>
 
using namespace std;
using ll = long long;
 
void solve()
{
	ll n, ans = 0;
	cin >> n;
 
	for (ll i = 5; i <= n; i *= 5)
	{
		ans += n / i;
	}
	cout << ans;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	solve();
 
	return 0;
}