#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Masukkan tiga angka: ";
    cin >> num1 >> num2 >> num3;

    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    cout << "Angka terbesar adalah: " << largest << endl;

    return 0;
}
