#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    char c;
    while (cin >> c) {
        cout << setbase(16) << int(c) << " ";
    }

    return 0;
}