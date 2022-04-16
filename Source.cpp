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
	vector <int> points = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 25, 50 };
	vector <string> ans;
	for (int i = 0; i < 21; i++) {
		if (points[i] * 2 == n) {
			ans.push_back('D' + to_string(points[i]));
		}
	}

	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 21; j++) {
			if (points[i] + 2 * points[j] == n) {
				ans.push_back(to_string(points[i]) + " " + 'D' + to_string(points[j]));
			}
			if (2 * points[i] + 2 * points[j] == n) {
				ans.push_back('D' + to_string(points[i]) + " " + 'D' + to_string(points[j]));
			}
			if (3 * points[i] + 2 * points[j] == n) {
				ans.push_back('T' + to_string(points[i]) + " " + 'D' + to_string(points[j]));
			}
		}
	}
	for (int i = 0; i < 22; i++) {
		for (int j = 0; j < 22; j++) {
			for (int g = 0; g < 21; g++) {
				if (points[i] + points[j] + 2 * points[g] == n) {
					ans.push_back(to_string(points[i]) + " " + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (points[i] + 2 * points[j] + 2 * points[g] == n) {
					ans.push_back(to_string(points[i]) + " " + 'D' + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (2 * points[i] + points[j] + 2 * points[g] == n) {
					ans.push_back('D' + to_string(points[i]) + " " + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (2 * points[i] + 2 * points[j] + 2 * points[g] == n) {
					ans.push_back('D' + to_string(points[i]) + " " + 'D' + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (2 * points[i] + 3 * points[j] + 2 * points[g] == n) {
					ans.push_back('D' + to_string(points[i]) + " " + 'T' + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (3 * points[i] + 2 * points[j] + 2 * points[g] == n) {
					ans.push_back('T' + to_string(points[i]) + " " + 'D' + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (3 * points[i] + 3 * points[j] + 2 * points[g] == n) {
					ans.push_back('T' + to_string(points[i]) + " " + 'T' + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (3 * points[i] + points[j] + 2 * points[g] == n) {
					ans.push_back('T' + to_string(points[i]) + " " + to_string(points[j]) + 'D' + to_string(points[g]));
				}
				if (points[i] + 3 * points[j] + 2 * points[g] == n) {
					ans.push_back(to_string(points[i]) + " " + 'T' + to_string(points[j]) + 'D' + to_string(points[g]));
				}
			}
		}
	}
	cout << ans.size() << endl;
	for (auto now : ans) {
		cout << now << endl;
	}
}