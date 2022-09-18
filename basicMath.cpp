// !/usr/bin/env c++

// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Sept, 18 2022
// This program does basic math.

#include <cmath>
#include <iostream>

int main() {
    std::cout << "7.4 + 5.7 = " << (7.4 + 5.7) << std::endl;
    std::cout << "2.7 - 8.9 = " << (2.7 - 8.9) << std::endl;
    std::cout << "10.4 / 4.5 = " << (10.4 / 4.5) << std::endl;
    std::cout << "5 + 5 / 5 = " << (5 + 5 / 5) << std::endl;
    std::cout << "6 + 8 * 3 = " << (6 + 8 * 3) << std::endl;
    std::cout << "5.4 + 2.8^3 = " << (5.4 + pow(2.8, 3)) << std::endl;
    std::cout << "√45 = " << (sqrt(45)) << std::endl;
}
