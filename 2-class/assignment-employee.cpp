#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employee_ID;
    string employee_name;
    string gender;

public:
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
    string getGender()
    {
        return gender;
    }
    void setGender(string g)
    {
        gender = g;
    }
};

int main()
{
    Employee emp1;
    emp1.setEmployeeID(1);
    emp1.setEmployeeName("John Doe");
    int emp1_id = emp1.getEmployeeID();

    cout << "Employee ID: " << emp1_id << endl;
    return 0;
}