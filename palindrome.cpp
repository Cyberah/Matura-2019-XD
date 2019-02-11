#include "pch.h"
#include <iostream>
#include <iterator>
#include <string>

int main()
{
	std::string word;
	std::string copyOfWord;

	std::cout << "Podaj slowo: ";
	std::cin >> word;
	copy(word.rbegin(), word.rend(), std::insert_iterator<std::string>(copyOfWord, copyOfWord.begin()));

	if (word == copyOfWord) {
		
		std::cout << copyOfWord << " jest palindromem slowa " << word << '\n';
	}
	else {
		//copy(copyOfWord.begin(), copyOfWord.end(), std::ostream_iterator<char>(std::cout));
		std::cout << copyOfWord << " nie jest palindromem slowa " << word << '\n';
	}

	return 0;
}
