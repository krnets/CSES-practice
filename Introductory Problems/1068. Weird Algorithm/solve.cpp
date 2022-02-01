#include <iostream>
#include <vector>
 
using namespace std;
 
using LL = long long;
 
vector<LL> solve(LL n)
{
	vector<LL> vec;
 
	while (n > 1)
	{
		vec.push_back(n);
 
		if (n % 2 == 0)
			n /= 2;
		else n = 3 * n + 1;
	}
	vec.push_back(1);
 
	return vec;
}
 
int main()
{
	int n;
	cin >> n;
	vector<LL> v = solve(n);
 
	for (LL x : v)
		cout << x << " ";
 
	return 0;
}