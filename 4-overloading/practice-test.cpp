#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
    float real;
    float imag;
public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex (const Complex &obj)
    {
        real = obj.real;
        imag = obj.imag;
    }

    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    bool operator==(const Complex &obj)
    {
        return (real == obj.real && imag == obj.imag);
    }

    void operator=(const Complex &obj)
    {
        real = obj.real;
        imag = obj.imag;
    }

    void describe()
    {
        cout << real <<  " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3;

    c3 = c1 + c2;
    c3.describe();

    Complex c4(8, 10);

    if (c3 == c4)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    return 0;
}