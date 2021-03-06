#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void sel_sort(std::vector<int> &V) {
	int smallest; //najmniejsza wartość
	int second; //potrzebne do porównania
	for (std::vector<int>::iterator it = V.begin(); it != V.end() - 1; ++it) {
		smallest = std::distance(V.begin(), it); //uzyskanie indeksu iteratora
		for (std::vector<int>::iterator it2 = it + 1; it2 < V.end(); ++it2)
			if (*it2 < V[smallest]) { //jeżeli wartość spod it2 jest mniejsza od wartości spod indeksu smallest
				second = std::distance(V.begin(), it2); // druga liczba = wartość iteratora it2
				smallest = second; //smallest teraz jest większą liczbą
			}
		std::swap(*it, V[smallest]); //zamienia miejscami wartości
	}
}

int main()
{
	std::cout << "Wprowadz liczby (dowlony znak konczy): ";
	std::vector<int> numbers;
	int N;
	while (std::cin >> N) 
		numbers.push_back(N);
	
	std::cout << "Przed sortowaniem:\n";
	std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int, char>(std::cout, " "));
	std::cout << "\nPo sortowaniu:\n";
	sel_sort(numbers);
	std::copy(numbers.begin(), numbers.end(), std::ostream_iterator<int, char>(std::cout, " "));
	return 0;
}
