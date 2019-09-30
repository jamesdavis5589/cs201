/**
 * @file     userInputMain.cpp
 * @author   Student Name
 * @version  Jan 21, 2019
 * John Quan
 * @brief    Print out every word that was entered
 *
 * Input an arbitrary number of “words” from the user (ending
 * when the user types some special word: perhaps something like
 * “end”). After all the input is done, the program should print
 * out every word that was entered separated by a space.
 */

#include "userInput.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> words;
	std::vector<std::string> wood;
	//std::vector<std::string> weird;

	// prompt
	std::cout << "Enter a series of strings (type \"end\" to finish): "
		<< std::endl;
	// TODO create userInput.cpp with this function
	getUserStrings(words);
	getUserStrings2(wood);
	//getUserStrings3(weird);

	std::cout << std::endl;
	std::cout << "----------------------Required--------------------------"
		<< std::endl;
	// print all words
	for (unsigned long i = 0; i < words.size(); ++i) {
		std::cout << words[i] << ' ';
	}

	std::cout << std::endl;
	std::cout << "----------------------Additional 1----------------------"
		<< std::endl;
	// TODO print only words >= 5

	for (unsigned long i = 0; i < wood.size(); ++i) {
		std::cout << wood[i] << ' ';
	}

	char c = 'x';
	std::cout << std::endl;
/*	std::cout << "----------------------Additional 2----------------------"
		<< std::endl;
	// TODO print only words containing char c

	for (unsigned long i = 0; i < weird.size(); ++i) {
		std::cout << weird[i] << ' ';
	}
	*/
	return 0;
}