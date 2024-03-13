#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
using namespace std;

void countAlphabetOccurrences(const string& text) {
    // Map to store the count of each alphabet
    unordered_map<char, int> alphabetCount;

    // Iterate through the text
    for (char c : text) {
        // Convert the character to lowercase
        char lowercaseChar = tolower(c);
        
        // Check if the character is an alphabet
        if (isalpha(lowercaseChar)) {
            // Increment the count for this alphabet
            alphabetCount[lowercaseChar]++;
        }
    }

    // Print the table
    cout << "Alphabet\tOccurrences\n";
    cout << "========================\n";
    for (char c = 'a'; c <= 'z'; ++c) {
        cout << c << "\t\t" << alphabetCount[c] << "\n";
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " <text>\n";
        return 1;
    }

    // Get the text from command-line arguments
    string text = argv[1];

    // Count occurrences of each alphabet
    countAlphabetOccurrences(text);

    return 0;
}
