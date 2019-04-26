#include <iostream>

int Demo(int argc, char* argv[]);

int main(int argc, char* argv[]) {
    
    return Demo(argc, argv);
}

int Demo(int argc, char* argv[]) {
    using namespace std;

    for (int i = 1; i < argc; i++) {
        cout << argv[i] << endl;
    }

    return 0;
}