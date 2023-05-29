#include <iostream>

using std::cout;
using std::endl;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arrA[] = { 1, 2, 3 };
    int arrB[] = { 6, 7, 8 };

    cout << "Before:\n";
    for (int i = 0; i < 3; ++i) {
        cout << *(arrA + i) << " - " << *(arrB + i) << endl;
    }

    for (int i = 0; i < 3; ++i) {
        swap(*(arrA + i), *(arrB + i));
    }

    cout << "After:\n";
    for (int i = 0; i < 3; ++i) {
        cout << *(arrA + i) << " - " << *(arrB + i) << endl;
    }
}
