#include <iostream>

int main() {

    using namespace std;

    enum cols {
        blue = 3,
        red = 5,
        green = 7
    };


    int choice;

    cout << "Make a choice 3, 7, or 5: ";
    cin >> choice;

    switch (choice) {
        case 0 ... blue:
            cout << "blue" << " = " << blue << endl;
            break;
        case blue + 1 ... red:
            cout << "red" << " = " << red << endl;
            break;
        case red + 1 ... green:
            cout << "green" << " = " << green << endl;
            break;
        default:
            cout << "invalid choice" << endl;
    }
 
    return 0;
}