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

	// ****** Test set 1: Valid test of each hand rank, (9 test total). ****** //

	// high card test
	PokerHand highCard("AH", "8S", "6D", "4C", "2H");
	PokerHand pair("AS", "AH", "9C", "8D", "7S");
	PokerHand twoPair("KD", "KS", "QH", "QS", "JD");
	PokerHand threeOfAKind("AS", "AH", "AC", "2D", "7S");
	PokerHand straight("5H", "6C", "7D", "8S", "9H");
	PokerHand flush("2H", "4H", "6H", "8H", "KH");
	PokerHand fullHouse1("AS", "AH", "AD", "KH", "KS");
	PokerHand fullHouse2("KH", "KS", "AS", "AH", "AD");
	PokerHand fourOfAKind("AS", "AH", "AD", "AH", "7S");
	PokerHand straightFlush("TH", "JH", "QH", "KH", "AH");

	if (highCard.getRank() == PokerRanks::HIGH_CARD) {
		cout << "High card test: Pass" << endl;
	}
	else {
		cout << "High card test: Fail" << endl;
	}

	// pair test
	if (pair.getRank() == PokerRanks::PAIR) {
		cout << "Pair test: Pass" << endl;
	}
	else {
		cout << "Pair test: Fail" << endl;
	}

	// two pair test
	if (twoPair.getRank() == PokerRanks::TWO_PAIR) {
		cout << "Two pair test: Pass" << endl;
	}
	else {
		cout << "Two pair test: Fail" << endl;
	}

	// Three of a kind test
	if (threeOfAKind.getRank() == PokerRanks::THREE_OF_A_KIND) {
		cout << "Three of a kind test: Pass" << endl;
	}
	else {
		cout << "Three of a kind test: Fail" << endl;
	}

	// Stright test
	if (straight.getRank() == PokerRanks::STRAIGHT) {
		cout << "Stright test: Pass" << endl;
	}
	else {
		cout << "Stright test: Fail" << endl;
	}

	// Flush test
	if (flush.getRank() == PokerRanks::FLUSH) {
		cout << "Flush test: Pass" << endl;
	}
	else {
		cout << "Flush test: Fail" << endl;
	}

	// Full House test 1
	if (fullHouse1.getRank() == PokerRanks::FULL_HOUSE) {
		cout << "Full House test 1: Pass" << endl;
	}
	else {
		cout << "Full House test 1: Fail" << endl;
	}

	// Full House test 2
	if (fullHouse2.getRank() == PokerRanks::FULL_HOUSE) {
		cout << "Full House test 2: Pass" << endl;
	}
	else {
		cout << "Full House test 2: Fail" << endl;
	}

	// Four of a kind test
	if (fourOfAKind.getRank() == PokerRanks::FOUR_OF_A_KIND) {
		cout << "Four of a Kind test: Pass" << endl;
	}
	else {
		cout << "Four of a Kind test: Fail" << endl;
	}

	// Stright Flush test
	if (straight.getRank() == PokerRanks::STRAIGHT_FLUSH) {
		cout << "Stright Flush test: Pass" << endl;
	}
	else {
		cout << "Stright Flush test: Fail\n" << endl;
	}

	// ******* Test Set 2: Compare Ranks Test ******* //

	// High card vs Pair
	straight.compareHand(flush);

	// Pair vs Two Pair
	pair.compareHand(twoPair);

	// Two Pair vs Three of a Kind
	twoPair.compareHand(threeOfAKind);

}
