def caluculate_multiple(a) :
    outerFunctionValue = a

    def innerFunction(b) :
        innerFUnctionValue = b
        print('Outer function value accessed from inner function: ', outerFunctionValue)
        return outerFunctionValue * innerFUnctionValue
    return innerFunction

result = calculate_multiple(5)
print("Multiple in Python :", result(10))