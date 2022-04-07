// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 5, 2022
// This is a program that generates a random number
// and the user guesses a number, if the user enters something that is not
// an integer than the program will know and let the user know


#include <iostream>
#include <random>
#include <string>


int main() {
    // declare variables
    int ageAsNumber;
    std::string ageAsString;

    // Get the guess from the user
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;
    std::cout << "" << std::endl;


    // switch the guess into an int and then check if it is a number and if
    // it is correct or not
    try {
        ageAsNumber = std::stoi(ageAsString);
        if (ageAsNumber < 40 && ageAsNumber > 25) {
            // display that the age is correct
            std::cout << "You are the perfect age to date our grandchild! :)";
        } else if (ageAsNumber > 40) {
            std::cout << "You are to old to date our grandchild :(\n";
        } else if (ageAsNumber < 25) {
            std::cout << "You are too young to date our grandchild :(\n";
        }
    } catch (std::invalid_argument) {
        std::cout << "That is not an age! \n";
    }
}
