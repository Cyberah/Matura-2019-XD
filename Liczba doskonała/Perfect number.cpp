#include "pch.h"
#include <iostream>

bool isPerfect(int N) {
	int dividers = 0;
	for (int i = 1; i < N; ++i)
		if (N % i == 0)
			dividers += i;

	if (N == dividers)
		return true;
	return false;
}

int main()
{
	std::cout << "Podaj liczbe: ";
	int N;
	std::cin >> N;

	if (isPerfect(N))
		std::cout << N << " jest liczba doskonala.\n";
	else
		std::cout << N << " nie jest liczba doskonala.\n";
	return 0;
}
