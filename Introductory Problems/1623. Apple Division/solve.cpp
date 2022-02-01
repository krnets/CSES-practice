#include <iostream>
#include <vector>
 
using namespace std;
using ll = long long;
 
void solve()
{
	ll n = 0, totalSum = 0, mx = 0;
	cin >> n;
	int limit = 1 << n;
 
	ll p[20] = {};
	for (int i = 0; i < n; ++i)
	{
		cin >> p[i];
		totalSum += p[i];
	}
 
	for (int i = 0; i < limit; ++i)
	{
		ll currSum = 0;
 
		for (int j = 0; j < n; ++j)
		{
			if ((i >> j) & 1)
				currSum += p[j];
		}
		if (currSum <= totalSum / 2)
			mx = max(mx, currSum);
	}
 
	cout << totalSum - 2 * mx;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	solve();
 
	return 0;
}