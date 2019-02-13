#include "pch.h"
#include <iostream>

bool isPrime(int N) {
	for (int i = 2; i < N; ++i) {
		if (N % i == 0)
			return false;
	}
	return true;
}
int main()
{
	std::cout << "Podaj liczbe: ";
	int N;
	std::cin >> N;
	if (N < 2) {
		std::cout << "Liczba nie moze byc mniejsza od dwoch.\n";
		exit(0);
	}
	if (isPrime(N))
		std::cout << N << " jest liczba pierwsza.\n";
	else
		std::cout << N << " nie jest liczba pierwsza.\n";

	return 0;
}