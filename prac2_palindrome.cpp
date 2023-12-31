#include <iostream>
#include <string>
#include <cctype>

using namespace std; // This line allows us to use "cin" and "cout" without prefixing "std::"

bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            left++;
        }

        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The input is a palindrome." << endl;
    } else {
        cout << "The input is not a palindrome." << endl;
    }

    return 0;
}
