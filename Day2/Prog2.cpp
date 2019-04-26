#include <iostream>
#include <string>

int main() {
    using namespace std;

    int count = 1;
    int num;
    string str;

    cout << "input \"string, number\" pairs" << endl 
         << count << ": ";

    while (true) {
        cin >> str >> num;
        cout << str << " " << num << endl 
             << ++count << ": ";
        if (str == "STOP") {
            break;
        } 
    } 

    return 0;
}