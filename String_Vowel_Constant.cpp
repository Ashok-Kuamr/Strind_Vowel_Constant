#include <iostream>
#include <string>
#include <cctype> // For isalpha and tolower functions
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0, consonants = 0;


    for (char c : input) {
        
        c = tolower(c);

        if (isalpha(c)) { 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
    return 0;
}
