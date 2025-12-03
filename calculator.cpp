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
     if (b == 0) {
        throw std::invalid_argument("Division by zero is not allowed");
    }
    return a / b;
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
}

double Calculator::ln(double x) {
    if (x <= 0) {
        throw std::invalid_argument("Logarithm undefined for x <= 0");
    }
    return std::log(x);
}

double Calculator::log10(double x) {
    if (x <= 0) {
        throw std::invalid_argument("Logarithm undefined for x <= 0");
    }
    return std::log10(x);
}

double Calculator::log(double base, double x) {
    if (x <= 0 || base <= 0 || base == 1) {
        throw std::invalid_argument("Invalid logarithm arguments");
    }
    return std::log(x) / std::log(base);
}