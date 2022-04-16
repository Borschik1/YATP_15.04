#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int n, power, cX = 0, cZ = 0;
	string dir;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> dir >> power;
		if (dir == "X") {
			cX += power;
		}
		else if (dir == "Z") {
			cZ += power;
		}
		else {
			cX += power;
			cZ += power;
		}
	}
	if (cX * cZ <= 0) {
		cout << abs(cZ) + abs(cX);
	}
	else {
		cout << max(abs(cX), abs(cZ));
	}
	return 0;
}
