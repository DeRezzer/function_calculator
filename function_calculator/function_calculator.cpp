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

int main()
{
	calculator_menu();
    return 0;
}

