#include "calculator.h"
constexpr double M_PI = 3.14159265358979323846;
#include <stdexcept>

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    return a / b;  // TODO: 0으로 나누기 처리 필요
}

// 라디안 삼각함수
double Calculator::sin(double x) {
    return std::sin(x);
}

double Calculator::cos(double x) {
    return std::cos(x);
}

double Calculator::tan(double x) {
    return std::tan(x);
}

// 도 단위 삼각함수
double Calculator::degToRad(double degrees) {
    return degrees * M_PI / 180.0;
}

double Calculator::sinDeg(double degrees) {
    return std::sin(degToRad(degrees));
}

double Calculator::cosDeg(double degrees) {
    return std::cos(degToRad(degrees));
}

double Calculator::tanDeg(double degrees) {
    return std::tan(degToRad(degrees));
    if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return a / b;
}