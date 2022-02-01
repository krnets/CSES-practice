#include <algorithm>
#include <iostream>
 
using namespace std;
 
void solve()
{
	string str, mid, ans;
	cin >> str;
 
	int freq[26] = {};
	int odd_cnt = 0;
 
	for (char c : str)
		freq[c - 'A']++;
 
	for (int x : freq)
	{
		if (x & 1)
		{
			++odd_cnt;
		}
	}
 
	if (odd_cnt > 1)
	{
		cout << "NO SOLUTION";
		return;
	}
 
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] & 1 ^ 1)
		{
			for (int j = 0; j < freq[i] / 2; ++j)
			{
				ans += 'A' + i;
			}
		}
 
		if (freq[i] & 1)
			mid = string(freq[i], i + 'A');
	}
	cout << ans << mid;
 
	reverse(ans.begin(), ans.end());
 
	cout << ans;
}
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	solve();
 
	return 0;
}