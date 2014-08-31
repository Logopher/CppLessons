#include <string>
#include <iostream>

int main(int argc, char** argv)
{
	std::cout << "Enter a word and a line of text.";

	std::string word;
	std::cin >> word;

	std::string line;
	std::getline(std::cin, line);

	std::cout << "Your word is \"" << word << "\" and your line of text is:\n" << line << "\n";

	std::cout << "\nPress any key to continue . . . ";
	std::cin.get();
}