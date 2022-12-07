#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    string firstName;
    string lastName;
    float salary;
    Employee()
    {
        cout << "Default Constructor Invoked" << endl;
    }
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    Employee(int id, string firstName, string lastName, float salary)
    {
        this->id = id;
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
    }
    ~Employee()
    {
        cout << "Destructor Invoked" << endl;
    }
};
int main(void)
{
    Employee e1;
    Employee e2;

    Employee e3 = Employee(101, "Sonoo", 890000);
    Employee e4 = Employee(102, "Nakul", 59000);

    Employee e5 = Employee(101, "Sonoo", "Nigam", 890000);
    Employee e6 = Employee(102, "Nakul", "Mehta", 59000);
    return 0;
}
