// function_calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

void calculator_menu() {

	std::cout << "Welcome to the Versitle Calculator!" << std::endl;
	std::cout << "What kind of calculation would you like to make?" << std::endl;
	std::cout << "" << std::endl; //empty line

	std::cout << "1. Standard" << std::endl;
	std::cout << "2. Decimal to Binary" << std::endl;
	std::cout << "3. Binary to Decimal" << std::endl;
	std::cout << "4. Grade Calculator" << std::endl;
}

bool check_bin(std::string bin) {
	int length = bin.length();

	if (length < 1) return false;
	for (int i = 0; i < length; i++) {
		if ((bin[i] != '0') && (bin[i] != '1')) {
			return false;
		}
	}
	return true;
}

std::string get_bin() {
	std::string bin = "";

	do {
		std::cout << "Enter a valid Binary number: ";
		getline(std::cin, bin);
	} while (check_bin(bin) == false);
	return bin;
}

int bin_to_dec() {
	get_bin();
	std::string convert = get_bin();
	int len = convert.length();
	int result = 0;
	for (int i = 0; i < len; i++) {
		if (convert[i] == '1') {
			result += pow(2, (len - i - 1));
		}
	}
	return result;
}

int main()
{
	calculator_menu();
    return 0;
}

