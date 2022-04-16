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
	vector <int> vec;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	int r = pow(10, 12);
	int ind1 = -1;
	int ind2 = -1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(vec[i] - vec[j]) < r) {
				r = abs(vec[i] - vec[j]);
				ind1 = i;
				ind2 = j;
			}
		}
	}
	cout << r << endl;
	if (vec[ind1] < vec[ind2]) {
		cout << ind1 + 1 << " " << ind2 + 1;
	}
	else {
		cout << ind2 + 1 << " " << ind1 + 1;
	}
}
