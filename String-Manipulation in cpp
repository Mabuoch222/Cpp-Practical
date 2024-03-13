#include <iostream>
#include <cstring>
using namespace std;

void showAddress(string str) {
    cout << "Address of each character in string: ";
    for (int i = 0; i < str.length(); i++) {
        cout << (void*)(&str[i]) << " ";
    }
    cout << endl;
}

void concatenateStrings(string str1, string str2) {
    char res[100];
    int i = 0;
    for (; i < str1.length(); i++) {
        res[i] = str1[i];
    }
    for (int j = 0; j < str2.length(); j++, i++) {
        res[i] = str2[j];
    }
    res[i] = '\0';
    cout << "Concatenated string: " << res << endl;
}

void compareStrings(string str1, string str2) {
    int res = strcmp(str1.c_str(), str2.c_str());
    if (res == 0) {
        cout << "Strings are equal." << endl;
    } else if (res > 0) {
        cout << "String 1 is greater than string 2." << endl;
    } else {
        cout << "String 1 is less than string 2." << endl;
    }
}

int lengthOfString(const char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

void convertToLowercase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    cout << "String in lowercase: " << str << endl;
}

void reverseString(string& str) {
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
        swap(str[i], str[j]);
    }
    cout << "Reversed string: " << str << endl;
}


int main() 
{
    string str, str1, str2;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    cout << "\nString Manipulation Menu\n";

    cout << "1. Show address of each character in string\n";
    showAddress(str1);
    cout << "2. Concatenate two strings\n";
    concatenateStrings(str1, str2);
    cout << "3. Compare two strings\n";
    compareStrings(str1, str2);
    cout << "4. Calculate length of the string (using pointers)\n";
    int len = lengthOfString(str.c_str());
    cout << "Length of the string: " << len << endl;
    cout << "5. Convert all lowercase characters to uppercase\n";
    convertToLowercase(str);
    cout << "6. Reverse the string\n";
    reverseString(str);
}
