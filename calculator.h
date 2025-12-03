#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <cmath>

class Calculator {
public:
    // 기본 연산
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

    // 삼각함수 (라디안)
    double sin(double x);
    double cos(double x);
    double tan(double x);

    // 삼각함수 (도)
    double sinDeg(double degrees);
    double cosDeg(double degrees);
    double tanDeg(double degrees);

private:
    double degToRad(double degrees);
};

#endif