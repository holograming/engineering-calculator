#include <iostream>
#include "calculator.h"
#include <stdexcept>

int main() {
    Calculator calc;

    std::cout << "=== Engineering Calculator ===" << std::endl;
    std::cout << "10 + 5 = " << calc.add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << calc.subtract(10, 5) << std::endl;
    std::cout << "10 * 5 = " << calc.multiply(10, 5) << std::endl;
    std::cout << "\n=== Division by Zero Test ===" << std::endl;
    try {
        std::cout << "10 / 0 = " << calc.divide(10, 0) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    return 0;
    }

}