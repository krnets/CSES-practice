#include <iostream>
 
using namespace std;
using ll = long long;
 
void solve()
{
	ll a, b;
	cin >> a >> b;
 
	if ((a + b) % 3 == 0 &&
		2 * a >= b &&
		2 * b >= a)
		cout << "YES";
	else
		cout << "NO";
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int t;
	cin >> t;
 
	while (t--)
	{
		solve();
		cout << "\n";
	}
 
	return 0;
}