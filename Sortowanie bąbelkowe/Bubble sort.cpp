#include "pch.h"
#include <iostream> //std::cout
#include <vector> //std::vector
#include <algorithm> //std::iter_swap
#include <iterator> //std::ostream_iterator

void showSortedV(std::vector<int> & V) {
	std::vector<int>::iterator it;
	std::vector<int>::iterator sit;
	for (it = V.begin(); it != V.end(); ++it) {
		for (sit = V.begin(); sit < V.end() - 1; ++sit) {
			if (*sit > *(sit + 1)) //PRIORYTETY OPERATORÓW!!!
				std::iter_swap(sit, (sit + 1));
		}
	}
	std::copy(V.begin(), V.end(), std::ostream_iterator<int, char>(std::cout, " "));
}

int main()
{
	int N;
	std::vector<int> vNumbs;
	std::cout << "Wprowadzaj liczby (dowolny znak konczy): ";
	while (std::cin >> N)
		vNumbs.push_back(N);

	std::cout << "Twoja posortowana tablica:\n";
	showSortedV(vNumbs);
	return 0;
}
