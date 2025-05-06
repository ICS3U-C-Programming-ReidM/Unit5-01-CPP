// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program converts Celsius to Fahrenheit with user input

#include <iostream>

int main() {
    // Declare variables
    float celsius;
    float fahrenheit;

    // Get user input
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    // Check if input is valid
    if (std::cin.fail()) {
        std::cout << "Enter a decimal number." << std::endl;
        return 1;
    }

    // Calculate Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display result
    std::cout << celsius << "°C is equal to "
    << fahrenheit << "°F" << std::endl;

    return 0;
}
