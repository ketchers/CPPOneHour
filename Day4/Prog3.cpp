#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> myNums {1,2,3};

	int newValue = 0;

	while (newValue >= 0) {
		cout << "Enter value toappend: ";
		cin >> newValue;
		myNums.push_back(newValue);
		cout << "Elements in the array: " << myNums.size() << endl;
	}

	return 0;

}