#include <cstring>
#include <iostream>

using std::cin, std::cout;

bool arr[200000];

int main()
{
	long long n, x;
	cin >> n;
	memset(arr, false, sizeof(arr));

	while (cin >> x)
		arr[x] = true;

	for (int i = 1; i <= n; i++)
		if (!arr[i])
		{
			cout << i;
			break;
		}

	return 0;
}
