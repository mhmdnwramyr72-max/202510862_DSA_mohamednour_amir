#include <iostream>
#include<vector>
using namespace std;

int main() {
	int chosenNumber = 5;
	int userGuess = 3;

	vector<int> guesses;

	while (userGuess != chosenNumber) {
		cout << "Enter a number: ";
		cin >> userGuess;

		guesses.push_back(userGuess);

		if (userGuess > chosenNumber) {
			cout << "Too high" << endl;
		}
		else if (userGuess < chosenNumber) {
			cout << "Too low" << endl;
		}
		else {
			cout << "Correct" << endl;
		}
	}
	cout << "\nAll guesses:" << endl;
	for (int i = 0; i < guesses.size(); i++) {
		cout << guesses[i] << endl;
	}
	return 0;
}
