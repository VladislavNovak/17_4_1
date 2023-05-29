#include <iostream>

using std::cout;
using std::endl;

const int ARRAYS_SIZE = 4;

void swapInPairs(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Вариант (1) передачи ссылкой
void swapBlocks(int (&arrA)[ARRAYS_SIZE], int (&arrB)[ARRAYS_SIZE]) {
    for (int i = 0; i < 3; ++i) {
        swapInPairs(*(arrA + i), *(arrB + i));
    }
}

// Вариант (2) передачи указателем. Тут понадобится размер массива
void printResult(const int* arrA, const int* arrB, size_t size) {
    for (size_t i{}; i < size; ++i) {
        cout << *(arrA + i) << " - " << *(arrB + i) << endl;
    }
}

int main() {
    int arrA[] = { 1, 2, 3, 4 };
    int arrB[] = { 6, 7, 8, 9 };

    cout << "Before:\n";
    printResult(arrA, arrB, sizeof(arrA) / sizeof(*arrA));

    swapBlocks(arrA, arrB);

    cout << "After:\n";
    printResult(arrA, arrB, sizeof(arrA) / sizeof(*arrA));
}
