#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& vec)
{
	sort(vec.begin(), vec.end());
	int cnt = 1;
	int prev = vec.front();

	for (int i = 1; i < vec.size(); ++i)
	{
		if (vec[i] != prev)
			++cnt;

		prev = vec[i];
	}

	cout << cnt;
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
