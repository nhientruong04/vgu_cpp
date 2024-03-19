#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2;
    cout << "Enter a string: ";
    getline(cin, s2);
    s1 += ", " + s2 + "!";
    cout << s1[0] << s1[s1.length()-1];
    return 0;
}

/*
If the user inputs "World", what is the output of this code? 
a) H!
b) HW
c) Enter a string: H!
d) Error
*/