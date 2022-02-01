#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
 
void solve()
{
	string str;
	cin >> str;
	sort(str.begin(), str.end());
 
	vector<string> vec;
 
	do { vec.push_back(str); }
	while (next_permutation(str.begin(), str.end()));
 
	cout << vec.size() << '\n';
 
	for (string& s : vec)
	{
		cout << s << '\n';
	}
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
 
	solve();
 
	return 0;
}