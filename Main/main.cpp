#include <string>
#include <istream>
#include <iostream>
#include <sstream>
#include <array>

std::string read(std::istream& stream, std::string& str, char delimiter)
{
	std::stringstream ss;
	char c;
	while (true)
	{
		std::cin.get(c);
		if (c == delimiter){ break; }
		ss << c;
	}

	return ss.str();
}

template<int N>
std::string read(std::istream& stream, std::string& str, std::array<char, N> delimiters)
{
	std::stringstream ss;
	char c;
	while (true)
	{
		std::cin.get(c);
		if (contains(delimiters, c)){ break; }
		ss << c;
	}

	return ss.str();
}

template<typename T, int N>
bool contains(std::array<T, N> arr, T& match)
{
	for (T item : arr)
	{
		if (item == match)
		{
			return true;
		}
	}

	return false;
}

void pause()
{
	std::cout << "\nPress any key to continue . . . ";
	std::cin.get();
}

int main(int argc, char** argv)
{
	std::cout << "Enter a word and a line of text.";

	std::array<char, 2> delimiters = { ' ', '\n' };

	std::string word;
	read(std::cin, word, delimiters);
	std::cin >> word;

	std::string line;
	read(std::cin, line, '\n');

	std::cout << "Your word is \"" << word << "\" and your line of text is:\n" << line << "\n";

	pause();
}