
#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int yob;

public:
    Person()
    {
        name = "Peter";
        yob = 2000;
    }

    ~Person()
    {
        cout << "Destructor called" << endl;
    }

    Person(const Person &someone)
    {
    }

    Person(string name, int yob)
    {
        this->name = name;
        this->yob = yob;
    }

    bool checkName(const Person &p)
    {
        if (p.name == this->name)
        {
            return true;
        }

        return false;
    }

    bool checkYear(const Person &p)
    {
        if (p.yob == this->yob)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    Person p1;
    Person p2("John", 1990);
    Person p3 = p2;

    cout << p1.checkName(p2) << endl;
    cout << p1.checkYear(p2) << endl;

    cout << p2.checkName(p3) << endl;
    cout << p2.checkYear(p3) << endl;

    return 0;
}
