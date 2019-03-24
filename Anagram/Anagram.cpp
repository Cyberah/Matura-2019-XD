#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
bool isAnagram(std::string first, std::string second) {
	if (first.length() != second.length())
		return false;

	std::sort(first.begin(), first.end());
	std::sort(second.begin(), second.end());
	if (first == second)
		return true;
	else
		return false;
	
}
int main()
{
	//do testow: arbuz, burza | matura, trauma
	std::string first, second;
	std::cout << "Podaj dwa wyrazy takiej samej dlugosci:\n";
	getline(std::cin, first); 
	getline(std::cin, second);
	if (isAnagram(first, second))
		std::cout << first << " i " << second << " tworza anagram.\n";
	else
		std::cout << first << " i " << second << " nie tworza anagramu.\n";
}
