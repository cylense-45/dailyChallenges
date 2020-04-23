#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

void initializeMorseCodeDB(map<char, string> *morseCodeDB) {
	morseCodeDB->insert(make_pair('a', ".-"));
	morseCodeDB->insert(make_pair('b', "-..."));
	morseCodeDB->insert(make_pair('c', "-.-."));
	morseCodeDB->insert(make_pair('d', "-.."));
	morseCodeDB->insert(make_pair('e', "."));
	morseCodeDB->insert(make_pair('f', "..-."));
	morseCodeDB->insert(make_pair('g', "--."));
	morseCodeDB->insert(make_pair('h', "...."));
	morseCodeDB->insert(make_pair('i', ".."));
	morseCodeDB->insert(make_pair('j', ".---"));
	morseCodeDB->insert(make_pair('k', "-.-"));
	morseCodeDB->insert(make_pair('l', ".-.."));
	morseCodeDB->insert(make_pair('m', "--"));
	morseCodeDB->insert(make_pair('n', "-."));
	morseCodeDB->insert(make_pair('o', "---"));
	morseCodeDB->insert(make_pair('p', ".--."));
	morseCodeDB->insert(make_pair('q', "--.-"));
	morseCodeDB->insert(make_pair('r', ".-."));
	morseCodeDB->insert(make_pair('s', "..."));
	morseCodeDB->insert(make_pair('t', "-"));
	morseCodeDB->insert(make_pair('u', "..-"));
	morseCodeDB->insert(make_pair('v', "...-"));
	morseCodeDB->insert(make_pair('w', ".--"));
	morseCodeDB->insert(make_pair('x', "-..-"));
	morseCodeDB->insert(make_pair('y', "-.--"));
	morseCodeDB->insert(make_pair('z', "--.."));
	morseCodeDB->insert(make_pair('1', ".----"));
	morseCodeDB->insert(make_pair('2', "..---"));
	morseCodeDB->insert(make_pair('3', "...--"));
	morseCodeDB->insert(make_pair('4', "....-"));
	morseCodeDB->insert(make_pair('5', "....."));
	morseCodeDB->insert(make_pair('6', "-...."));
	morseCodeDB->insert(make_pair('7', "--..."));
	morseCodeDB->insert(make_pair('8', "---.."));
	morseCodeDB->insert(make_pair('9', "----."));
	morseCodeDB->insert(make_pair('0', "-----"));
	morseCodeDB->insert(make_pair('.', ".-.-.-"));
	morseCodeDB->insert(make_pair(',', "--..--"));
	morseCodeDB->insert(make_pair('?', "..--.."));
}

void getInput(string &input) {
	cout << "Enter a string: ";
	cin >> input;
	cout << endl;
}

void translateToMorseCode(map<char, string> *morseCodeDB, string &input, string &output) {
	for (int i = 0; i < input.size(); ++i) {
		output += morseCodeDB->at(tolower(input[i]));
	}
}

int main() {
	map<char, string> morseCodeDB;
	initializeMorseCodeDB(&morseCodeDB);
	string input = "";
	getInput(input);

	string output = "";
	translateToMorseCode(&morseCodeDB, input, output);
	cout << output << endl;

	return 0;
}