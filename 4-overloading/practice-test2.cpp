#include <iostream>
#include <string>

using namespace std;

class Beverage
{
private:
    float price;
    float topping_price;
    float condiment_price;

public:
    Beverage()
    {
        price = 0;
        topping_price = 0;
        condiment_price = 0;
    }

    Beverage(float p, float tp, float cp)
    {
        price = p;
        topping_price = tp;
        condiment_price = cp;
    }

    Beverage(const Beverage &obj)
    {
        price = obj.price;
        topping_price = obj.topping_price;
        condiment_price = obj.condiment_price;
    }

    Beverage operator+(const Beverage &obj)
    {
        Beverage temp;
        temp.price = price + obj.price;
        temp.topping_price = topping_price + obj.topping_price;
        temp.condiment_price = condiment_price + obj.condiment_price;
        return temp;
    }

    bool operator==(const Beverage &obj)
    {
        return (price == obj.price && topping_price == obj.topping_price && condiment_price == obj.condiment_price);
    }

    void describe(){
        cout << "Price: " << price << "|" 
        << "Topping Price: " << topping_price << "|" 
        << "Condiment Price: " << condiment_price << endl;
    }
};

int main()
{
    Beverage b1(3, 4, 5);
    b1.describe();
    Beverage b2(5, 6, 7);
    b2.describe();
    Beverage b3;

    b3 = b1 + b2;
    b3.describe();

    return 0;
}