#include <iostream>

using namespace std;

constexpr int square(int number) {
    return number * number;
}

int main() {

    const int ARRAY_LENGTH = 4;
    int myNums[ARRAY_LENGTH] {1, -3, 45, 89};

    int myMoreNums[square(ARRAY_LENGTH)] {};

    cout << "Enter index to be changed: ";
    int chgIdx;
    cin >> chgIdx;

    cout << "Enter new value: ";
    int chgVal;
    cin >> chgVal;

    myNums[chgIdx] = chgVal;

    myMoreNums[square(chgIdx)] = square(chgVal);

    return 0;
}