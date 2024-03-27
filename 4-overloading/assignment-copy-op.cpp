#include <iostream>
using namespace std;

class myClass
{
private:
    int value;

public:
    myClass()
    {
        value = 1;
    }
    myClass(int val)
    {
        value = val;
    }

    myClass(const myClass &obj)
    {
        value = 0; //copy constructor with value 0
    }

    void operator=(const myClass &obj)
    {
        value = obj.value;  
    }
    void describe()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    myClass obj1(10);
    myClass obj2;
    obj2.describe();

    obj2 = obj1;  // Assignment operator which copies value of obj1 to obj2
    obj2.describe();

    myClass obj3(obj1);  // Copy constructor with value 0
    obj3.describe();

    return 0;
}