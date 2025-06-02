#include <iostream>
using namespace std;

int main() {
    int* numbers = new int[1000];

    for (int i = 0; i < 1000; ++i) {
        numbers[i] = i;
    }

    cout << "Array created." << endl;

    delete[] numbers;
    return 0;
}