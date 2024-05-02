#include <iostream>
using namespace std;

int main() {
    int Num;
    cout << "Enter a number: ";
    cin >> Num;

    if (Num % 2 == 0) {
        cout << Num << " is even." << endl;
    } else {
        cout << Num << " is odd." << endl;
    }

    cout << "Press any key to exit..." << endl;
    getchar();

    return 0;
}
