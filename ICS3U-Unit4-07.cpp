// Copyright (c) 2022 Emmaneln Fofeyin
//
// Created by: Emmanuel Fofeyin
// Created on: Nov 2022
// This program uses loops in if statements


#include <iostream>

int main() {
    int counter;

    // Process and Output
    for (counter = 1000; counter <= 2000; counter++) {
        if (counter % 5 == 4)
            std::cout << counter << "\n";
        else
            std::cout << counter << " ";
    }

    std::cout << "" << std::endl;
    std::cout << "\nDone." << std::endl;
}
