#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2;
    cout << "Enter a string: ";
    getline(cin, s2);
    s1 += ", " + s2 + "!";
    cout << s1 << " has " << s1.length() << " characters.";
    return 0;
}

/*
If the user inputs "World", what is the output of this code? 
a) Hello, World! has 13 characters.
b) Hello, World! has 12 characters.
c) Enter a string: Hello, World!
d) Error
*/