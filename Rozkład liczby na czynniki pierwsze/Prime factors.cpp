#include "pch.h"
#include <iostream>

void showFactors(int N) {
	int factor = 2;
	while (N > 1) {
		while (N % factor == 0) {
			std::cout << factor << " ";
			N = N / factor;
		}
		++factor;
	}
}

int main()
{
	int N;
	std::cout << "Podaj liczbe do rozlozenia: ";
	std::cin >> N;
	std::cout << "Czynniki:\n";
	showFactors(N);
	return 0;
}
