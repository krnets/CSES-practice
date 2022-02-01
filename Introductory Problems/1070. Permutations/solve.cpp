#include <iostream>
 
using namespace std;
 
void solve()
{
	int n;
	cin >> n;
 
	if (n == 1)
	{
		cout << 1;
		return;
	}
	if (n == 2 || n == 3)
	{
		cout << "NO SOLUTION";
		return;
	}
	for (int i = 2; i <= n; i += 2)
	{
		cout << i << " ";
	}
	for (int i = 1; i <= n; i += 2)
	{
		cout << i << " ";
	}
}
 
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
 
	solve();
 
	return 0;
}