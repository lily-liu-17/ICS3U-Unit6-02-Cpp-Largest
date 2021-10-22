// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This rogram finds the largest of 10 random numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int GreatestNumber(std::array<int, N> numberList) {
    int biggest = numberList[1];

    for (int loopCounter = 0; loopCounter < numberList.size(); loopCounter++) {
        if (numberList[loopCounter] > biggest) {
            biggest = numberList[loopCounter];
        }
    }

    return biggest;
}

int main() {
    // This program finds the averae of 10 random numbers

    std::array<int, 10> numberList;
    int random;
    int biggest;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);

    std::cout << "Here is a list of random numbers : \n" << std::endl;


    for (int loopCounter = 1; loopCounter < 11; loopCounter++) {
        random = idist(rgen);
        numberList[loopCounter] = random;
        std::cout << "The random number " << loopCounter << " is : "
        << random << std::endl;
    }

    biggest = GreatestNumber(numberList);
    std::cout << "" << std::endl;
    std::cout << "The largest number is " << biggest << std::endl;

    std::cout << "\nDone." << std::endl;
}
