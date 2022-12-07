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
    void display()
    {
        cout << id << "  " << name << "  " << salary << endl;
    }
    void displayFotThis()
    {
        cout << this->id << "  " << this->firstName << "  " << this->lastName << " " << this->salary << endl;
    }
};
int main(void)
{
    Employee e1;
    Employee e2;

    Employee e3 = Employee(101, "Sonoo", 890000);
    Employee e4 = Employee(102, "Nakul", 59000);
    e3.display();
    e4.display();

    Employee e5 = Employee(101, "Sonoo", "Nigam", 890000);
    Employee e6 = Employee(102, "Nakul", "Mehta", 59000);
    e5.displayFotThis();
    e6.displayFotThis();
    return 0;
}
