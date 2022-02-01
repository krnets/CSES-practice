#include <iostream>

using namespace std;
#define ln '\n';

void solve(int src, int dest, int aux, int n)
{
	if (n)
	{
		solve(src, aux, dest, n - 1);
		cout << src << ' ' << dest << ln;
		solve(aux, dest, src, n - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	cout << (1 << n) - 1 << ln;
	solve(1, 3, 2, n);
}
