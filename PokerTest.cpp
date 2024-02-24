/**
 * @file PokerTest.cpp
 * @brief Contains the main() function for testing the poker hand class.
 *
 * This file defines the main() function which tests the poker hand class.
 *
 * @date 2/5/2024
 * @version New
 * @author Jerry Wang
 */
#pragma once
#include <iostream>
#include "PokerHand.h"
#include "PokerRanks.h"

using namespace std;

int main() {
	// test different poker hand ranks
	PokerHand royalFlush("10H", "JH", "QH", "KH", "AH");
	royalFlush.printHand();

	try {
		PokerHand invalidHand("10H", "JH", "QH", "KH", "AH");
	}
	catch (const invalid_argument& e) {
		cout << e.what() << endl;
	}
	PokerHand straightFlush("2H", "3H", "4H", "5H", "6H");
	straightFlush.printHand();
}
