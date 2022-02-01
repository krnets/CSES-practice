#include <iostream>
#include <set>
#include <vector>

using namespace std;

void solve(vector<int>& vec)
{
	set<int> s(vec.begin(), vec.end());

	cout << s.size();
}

int main()
{
	int n;
	cin >> n;
	vector<int> vec;

	while (n--)
	{
		int x;
		cin >> x;
		vec.push_back(x);
	}

	solve(vec);
}
