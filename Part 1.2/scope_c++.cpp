#include <iostream>
#include <functional>
using namespace std;

function<int(int)> calculateMultiple(int a) {
    int outerFuncitonValue = a;

    return [outerFuncitonValue](int b) -> int{
        int innerFunctionValue = b;
        cout << "Outer function value accessed form inner function: " << outerFuncitonValue << endl;
        return outerFuncitonValue * innerFunctionValue;
    };
}

int main () {
    auto result = calculateMultiple(5);
    cout << "Sum in C++ " << result(10) << endl;
    return 0;
}