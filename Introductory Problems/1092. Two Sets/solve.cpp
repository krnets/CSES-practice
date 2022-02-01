#include <iostream>
#include <vector>
 
using namespace std;
using ll = long long;
 
void solve()
{
	ll n;
	cin >> n;
 
	ll sum = n * (n + 1) / 2;
 
	if (sum & 1)
		cout << "NO";
	else
	{
		cout << "YES" << "\n";
		ll mid = sum / 2;
		vector<ll> v1, v2;
 
		for (int i = n; i >= 1; --i)
		{
			if (i <= mid)
			{
				v1.push_back(i);
				mid -= i;
			}
			else
			{
				v2.push_back(i);
			}
		}
		cout << v1.size() << "\n";
 
		for (ll i : v1) cout << i << " ";
 
		cout << v2.size() << "\n";
 
		for (ll i : v2) cout << i << " ";
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	solve();
 
	return 0;
}