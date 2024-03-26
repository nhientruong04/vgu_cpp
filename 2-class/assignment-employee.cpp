#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employee_ID;
    string employee_name;
    int employee_age;

public:
    Employee()
    {
        employee_ID = 0;
        employee_name = "";
        employee_age = 0;
    }
    Employee(int id, string name, int age)
    {
        employee_ID = id;
        employee_name = name;
        employee_age = age;
    }

    string getEmployeeName()
    {
        return employee_name;
    }
    void setEmployeeName(string name)
    {
        employee_name = name;
    }
    int getEmployeeID()
    {
        return employee_ID;
    }
    void setEmployeeID(int id)
    {
        employee_ID = id;
    }
    int getEmployeeAge()
    {
        return employee_age;
    }
    void setEmployeeAge(int age)
    {
        employee_age = age;
    }
    void print()
    {
        cout << "Employee ID: " << employee_ID << endl;
        cout << "Employee Name: " << employee_name << endl;
        cout << "Employee Age: " << employee_age << endl;
    }

    ~Employee()
    {
        cout << "Employee object destroyed" << endl;
    }

};

int main()
{
    Employee employee1 = Employee(1, "Tran Hai Duong", 19);
    employee1.print();

    Employee employee2 = Employee(2, "Truong Hai Dan", 19);
    employee2.print();

}