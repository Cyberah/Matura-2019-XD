#include <iostream>
#include <string>
#include <algorithm>

std::string encrypt(std::string & s, int N) {
	std::transform(s.begin(), s.end(), s.begin(), ::toupper);
	std::string::iterator it;
	for (it = s.begin(); it != s.end(); ++it) {
		if (*it == ' ')
			continue;
		*it += static_cast<char>(N % 26); //jawne rzutowanie, ale może być niejawne.
		if (*it > 'Z')
			*it -= 26;
	}

	return s;
}
int main()
{
	std::cout << "Podaj zdanie jakie chcesz zaszyfrowac: ";
	std::string sentence;
	getline(std::cin, sentence);

	std::cout << "Podaj o ile liter chcesz przesunac alfabet: ";
	int N;
	std::cin >> N;

	std::cout << "Twoje zaszyfrowane zdanie: " << encrypt(sentence, N) << '\n';
	return 0;
}
