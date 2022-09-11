// manipulating strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
// /*Write a C++ program that prompts the user to enter his or her name and
///then creates a secret password consisting of three letters(in lowercase)
//number.For example, if the user enters “Vassilis Bouras” a secret 
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <boost/algorithm/string.hpp>
using namespace boost::algorithm;

using namespace std;

int main()
{
	string Name,alphabet,random_digit,digit;
	int random_int;
	
	cout << "enter your name" << endl;
	cin >> Name;

	
   alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	digit = " 0, 1, 2, 3, 4, 5, 6, 7, 8, 9";

	cout << to_lower_copy(alphabet[rand() % 26]) <<
		to_lower_copy(alphabet[rand() % 26]) <<
		to_lower_copy(alphabet[rand() % 26]) <<
		digit[rand() % 10] <<
		digit[rand() % 10] <<
		digit[rand() % 10] <<
		digit[rand() % 10] <<endl;


	return 0; 
	


		



   
}
