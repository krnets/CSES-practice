#include <cmath>
#include <iostream>
#include <string>

using namespace std;
using ll = long long;
#define ln '\n';

char solve(ll k)
{
	ll a_max = 0;
	ll a_next = 0;
	int n = 0;

	while (a_next < k)
	{
		a_max = a_next;
		++n;
		a_next = a_next + 9 * n * llround(pow(10, n - 1));
	}

	ll p = llround(pow(10, n - 1)) + (k - a_max - 1) / n;
	int r = (k - a_max - 1) % n;

	return to_string(p)[r];
}

int main()
{
	int q;
	cin >> q;

	for (int i = 0; i < q; ++i)
	{
		ll k;
		cin >> k;
		cout << solve(k) << ln;
	}
}
