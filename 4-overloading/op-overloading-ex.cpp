#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
    string name;
    int age;

public:
    Cat()
    {
        name = "Kitty";
        age = 1;
    }
    Cat(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void operator--()
    {
        this->age--;  // Decrease age by 1
    }
    void operator--(int)
    {
        this->age--;  // Decrease age by 1
    }
    void print_age()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Cat calico = Cat("Calico", 2);
    calico.print_age();
    calico--;  // Decrease age by 1
    calico.print_age();
    --calico;  // Decrease age by 1
    calico.print_age();
    return 0;
}