//Name:Siddhant Kiran Bhosale
//PRN:23070123038
//Aim:Implementation of Decision Making Statements to Check the give Character is a Vowel or Consonant

#include <iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter a character: ";
    cin >> character;

    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }

    return 0;
}


/*Output:
For Vowel-
Enter a character: i
i is a vowel.

For Consonant-
Enter a character: s
s is a consonant.*/
