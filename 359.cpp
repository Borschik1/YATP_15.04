#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int d = 3;
	int cnt = 0;
	if (n == 1) {
		cout << 1;
		return 0;
	}
	int now = 2;
	for (int i = 2; i < n; i++) {
		now += d;
		cnt++;
		if (cnt == 2) {
			d += 2;
			cnt = 0;
		}
	}
	cout << now + now / 10;
	return 0;
}
