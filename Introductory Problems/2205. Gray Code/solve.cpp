#include <bitset>
#include <iostream>

using namespace std;

void solve()
{
	int n;
	cin >> n;

	for (int i = 0; i < (1 << n); ++i)
	{
		int x = i ^ (i >> 1);
		string s = bitset<32>(x).to_string();

		cout << s.substr(s.length() - n) << '\n';
	}
};

int main()
{
	solve();
}
