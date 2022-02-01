#include <iostream>
 
using namespace std;
 
void solve(string& s)
{
	int ans = 1, length = 0;
	char c = 'A';
 
	for (char d : s)
	{
		if (c == d)
		{
			++length;
			ans = max(ans, length);
		}
		else
		{
			length = 1;
			c = d;
		}
	}
	cout << ans;
}
 
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
 
	string s;
	cin >> s;
	solve(s);
 
	return 0;
}