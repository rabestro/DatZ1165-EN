#include <iostream>
using namespace std;

int main() {
	char c;
	bool isFirstLetter = true;
	cin >> c; // This is trick to force Sololearn get input

	do {
  		if (isFirstLetter && c >= 'a' && c <= 'z') {
  		    c += 'A' - 'a';
  		} else if (!isFirstLetter && c >= 'A' && c <= 'Z') {
  		    c += 'a' - 'A';
  		}
  		cout << c;
  		isFirstLetter = c == ' ';
	} while ((c = getchar()) != EOF && c != '.');
	return 0;
}