#include <iostream>
#define endl '\n';
 
using namespace std;
using ll = long long;
 
void solve()
{
	ll n;
	cin >> n;
 
	for (int k = 1; k <= n; ++k)
	{
		ll total = k * k;
		ll positions = total * (total - 1) / 2;
		ll attackPositions = 4 * (k - 1) * (k - 2);
		ll ans = positions - attackPositions;
 
		cout << ans << endl;
	}
}
 
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
 
	solve();
 
	return 0;
}