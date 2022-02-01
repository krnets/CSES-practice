#include <iostream>
 
using namespace std;
using ll = long long;
#define MOD 1000000007;
 
void solve()
{
	ll n, res = 1;
	cin >> n;
 
	while (n--)
	{
		res = (res << 1) % MOD;
	}
 
	cout << res;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	solve();
 
	return 0;
}