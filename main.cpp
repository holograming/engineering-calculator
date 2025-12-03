#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    std::cout << "=== Engineering Calculator ===" << std::endl;
    std::cout << "10 + 5 = " << calc.add(10, 5) << std::endl;
    std::cout << "10 - 5 = " << calc.subtract(10, 5) << std::endl;
    std::cout << "10 * 5 = " << calc.multiply(10, 5) << std::endl;
    std::cout << "10 / 5 = " << calc.divide(10, 5) << std::endl;
    // 삼각함수 테스트
    std::cout << "\n=== Trigonometry ===" << std::endl;
    std::cout << "sin(90°) = " << calc.sinDeg(90) << std::endl;
    std::cout << "cos(0°) = " << calc.cosDeg(0) << std::endl;
    std::cout << "tan(45°) = " << calc.tanDeg(45) << std::endl;

    return 0;
}