function calculateMultiple(a) {
    let outerFunctionValue = a;

    function innerFunction(b) {
        let innerFunctionValue = b;
        console.log('Outer function value accessed from inner function: ', outerFunctionValue);
        return innerFunction;
    }
}

let result = calculateMultiple(5);
console.log("Multiple in JavaScript :", result(10));