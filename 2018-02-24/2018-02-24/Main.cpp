#include <iostream>
#include <vector>
using namespace std;

int average(vector<int> nums);

int main() {
	cout << "Hello World" << endl;
	vector<int> test = { 1, 2, 3, 4, 5 };
	cout << average(test) << endl;
}

int average(vector<int> nums) {
	int total = 0;
	for (unsigned int i = 0; i < nums.size(); i++) {
		total += nums[i];
	}
	return total/nums.size();
}