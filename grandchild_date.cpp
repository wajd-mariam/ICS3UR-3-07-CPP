// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program uses Compound Boolean Expressions to solve a problem

#include <iostream>

int main() {
    // variables
    int age;

    // input
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "" << std::endl;

    // process & output
    if (age >= 25 && age <= 40) {
        std::cout << "You can date my grandchild!";
    } else {
        std::cout << "You can't date my grandchild" << std::endl;
    }
}
