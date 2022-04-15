#include <iostream>
#include<fstream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	vector<int> vec;
	int n;
	while (!fin.eof())
	{
		fin >> n;
		vec.push_back(n);
	}
	sort(vec.begin(), vec.end());
	int r = vec[1] - vec[0];
	for (int i = 2; i < vec.size(); ++i) {
		if (vec[i] - vec[i - 1] != r) {
			fout << "No";
			return 0;
		}
	}
	fout << "Yes";
	fin.close();
	fout.close();
	return 0;
}
