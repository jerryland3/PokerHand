/**
 * @class Card
 * @brief Defines the Card class for representing a playing card.
 *
 * This file contains the definition of the Card class, which represents a playing card.
 * Each card has a suit and a value, which are represented by a character and an integer, respectively.
 * The class provides functionality to create a card from a string, get the suit and value of a card,
 * and compare cards for sorting purposes.
 *
 * @date 2/18/2024
 * @version New
 * @author Jerry Wang
 */

#pragma once

#include <string>
#include <stdexcept>

class Card {
public:

	/**
	 * @brief Constructs a Card object from a string representation of a card.
	 *
	 * Constructs a Card object by parsing a string representation of a card,
	 * which consists of a value followed by a suit character.
	 * Valid values are '2' to '9', 'T' for ten, 'J' for jack, 'Q' for queen,
	 * 'K' for king, and 'A' for ace. Valid suits are 'S' for spades, 'H' for hearts,
	 * 'D' for diamonds, and 'C' for clubs.
	 *
	 * @param card The string representation of the card.
	 * @throw invalid_argument if the string does not represent a valid card.
	 */
	Card(std::string card) {
		// check the string length
		if (card.length() != 2) {
			throw std::invalid_argument("Invalid card string length");
		}

		// check the value of the card
		if (card[0] != 'A' && card[0] != 'K' && card[0] != 'Q' && card[0] != 'J' && card[0] != 'T' && (card[0] < '2' || card[0] > '9')) {
			throw std::invalid_argument("Invalid card value");
		}

		// check the suit of the card
		if (card[1] != 'S' && card[1] != 'H' && card[1] != 'D' && card[1] != 'C') {
			throw std::invalid_argument("Invalid card suit");
		}

		// set the suit and value of the card, converting the value to an integer.
		suit = card[1];

		if (card[0] == 'A') {
			value = 14;
		}
		else if (card[0] == 'K') {
			value = 13;
		}
		else if (card[0] == 'Q') {
			value = 12;
		}
		else if (card[0] == 'J') {
			value = 11;
		}
		else if (card[0] == 'T') {
			value = 10;
		}
		else {
			value = card[0] - '0';
		}
	}

	/**
	 * @brief Returns the suit of the card.
	 *
	 * Returns the suit character of the card ('S' for spades, 'H' for hearts,
	 * 'D' for diamonds, 'C' for clubs).
	 *
	 * @return The suit of the card.
	 */
	char getSuit() const {
		return suit;
	}

	/**
	 * @brief Returns the value of the card.
	 *
	 * Returns the value of the card as an integer.
	 * For numeric cards, the value is the numeric value itself.
	 * For face cards, the value is as follows: Jack - 11, Queen - 12, King - 13, Ace - 14.
	 *
	 * @return The value of the card.
	 */
	int getValue() const {
		return value;
	}

	/**
	 * @brief Comparison function for sorting cards.
	 *
	 * This static method is used for comparing two cards for sorting purposes.
	 * It compares the values of two cards.
	 *
	 * @param a The first card to compare.
	 * @param b The second card to compare.
	 * @return true if the value of card a is less than the value of card b, false otherwise.
	 */
	static bool compareCards(const Card& a, const Card& b) {
		return a.value < b.value;
	}

private:
	char suit{ '\0' }; /**< The suit of the card. */
	int value{ -1 };   /**< The value of the card. */
};
