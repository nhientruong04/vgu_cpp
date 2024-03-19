#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "Hello";
    s.insert(0, "World ");
    cout << s;
    return 0;
}

/*
What is the output of this program?
a) Hello
b) World
c) HelloWorld
d) WorldHello
*/