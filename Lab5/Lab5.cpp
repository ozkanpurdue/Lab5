
// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
#include <vector>

using namespace std;

void cypherConversion(string text)
{
	int lineLength;
	int cypherLocation;
	char toUpperCase;
	vector<char> cypher = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

	lineLength = size(text);

	for (int j = 0; j < lineLength; j++)
	{
		if (text[j] >= 65 && text[j] <= 90)
		{
			cypherLocation = text[j] - 65;
			cout << cypher[cypherLocation];
		}
		else if (text[j] >= 97 && text[j] <= 122)
		{
			toUpperCase = text[j] - 32;
			cypherLocation = toUpperCase - 65;
			toUpperCase = cypher[cypherLocation] + 32;
			cout << toUpperCase;
		}
		else
		{
			cout << text[j];
		}
	}
}

int main()
{
	string sentence;

	cout << "enter a line: ";
	getline(cin, sentence);

	cypherConversion(sentence);
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
