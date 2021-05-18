#include <iostream>
#include <regex>
using namespace std;

/*
B2[9]. Calculate whether the character string s contains
at least two occurrences of equal adjacent characters.
Example #1. s=“a12bb34c”, answer=no (only ‘bb’).
Example #2. s=“a12bb34ccc”, answer=yes (even 3: bb,cc,cc).
*/
int main() {
    string s;
    cin >> s;

    bool isMatch = regex_match(s, regex( ".*(.)\\1.*(.)\\2.*"));

    cout << ( isMatch ? "yes" : "no");

    return 0;
}