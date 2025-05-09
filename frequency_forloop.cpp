#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};  // Array to store frequency of each ASCII character

    cout << "Enter a string: ";
    getline(cin, str);

    // Count frequency of each character
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        freq[(unsigned char)ch]++;  // Cast to unsigned char for safe indexing
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << "'" << (char)i << "' : " << freq[i] << endl;
        }
    }

    return 0;
}
