#include "pch.h"
#include <iostream>
//wersja algorytmu z odejmowaniem
int biggestDivider(int first, int second) {
	do {
		if (second < first)
			first -= second;
		if (first < second)
			second -= first;

		if (second == first)
			return first; //lub second - bez znaczenia która, bo w końcu są takie same.
	} while (true);
}
int main()
{
	int N, O;
	std::cout << "Podaj dwie liczby: ";
	std::cin >> N;
	std::cin >> O;
	std::cout << "NWD liczb " << N << " i " << O << " to " << biggestDivider(N, O) << '\n';
	return 0;
}
