#include <iostream>
#include <cctype> // For checking if a character is alphabetic
using namespace std;

int main() {
    string str;
    int vowelCount = 0, consonantCount = 0;

    cout << "Enter a string: ";
    getline(cin, str); // Use getline to allow spaces

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]); // Convert each character to lowercase

        // Check if the character is alphabetic
        if (isalpha(ch)) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            }
            // Check for consonants
            else {
                consonantCount++;
            }
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
