// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on March 2022
// Allows user to guess number

#include <iostream>
#include <random>

int main() {
    // I check if the user guessed correctly
    int guess;
    int chosenNumber;

    // input
    std::cout << "Guess a number between 0-9: ";
    std::cin >> guess;

    // process
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    chosenNumber = idist(rgen);

    if (guess == chosenNumber) {
        // output
        std::cout << "You got it!";
    } else {
        // output
        std::cout << "Maybe next time!";
    }
}
