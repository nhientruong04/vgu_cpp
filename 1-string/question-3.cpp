#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "Hello";
    s.replace(0, 1, "J");
    cout << s;
    return 0;
}

/*
What is the output of this program?
a) Hello
b) Jello
c) HJello
d) Error
*/