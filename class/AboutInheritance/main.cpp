#include <iostream>
using namespace std;
class Account
{
public:
    float salary;
    Account()
    {
        cout << "Account Called" << endl;
    }
    void displayAccount()
    {
        cout << "This is account" << endl;
    }
};

class Programmer : public Account
{
public:
    float bonus;
    Programmer(float salary, float bonus)
    {
        this->salary = salary;
        this->bonus = bonus;
    }
    void displayProgrammer()
    {
        cout << "This is programmer account" << endl;
    }
};

class Animal
{
public:
    string type;
    void eat()
    {
        cout << "Eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    string size;
    void bark()
    {
        cout << "Barking..." << endl;
    }
};
class BabyDog : public Dog
{
public:
    BabyDog(string type, string size)
    {
        this->type = type;
        this->size = size;
    }
    void weep()
    {
        cout << "Weeping...";
    }
    void info()
    {
        cout << "Type is " << this->type << " and Size is " << this->size << endl;
    }
};

class A
{
protected:
    int a;

public:
    void get_a(int a)
    {
        this->a = a;
    }
    void displayParent()
    {
        cout << "Parent A" << endl;
    }
};

class B
{
protected:
    int b;

public:
    void get_b(int b)
    {
        this->b = b;
    }
    void displayParent()
    {
        cout << "Parent B" << endl;
    }
};
class C : public A, public B
{
public:
    void display()
    {
        cout << "The value of a is : " << a << endl;
        cout << "The value of b is : " << b << endl;
        cout << "Addition of a and b is : " << a + b << endl;
    }
    void view()
    {
        A ::displayParent();
        B ::displayParent();
    }
};

int main(void)
{
    Programmer p1(1000, 5000);
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;

    p1.displayAccount();
    p1.displayProgrammer();

    BabyDog d1("dog", "small");
    d1.eat();
    d1.bark();
    d1.weep();
    d1.info();

    C c;
    c.get_a(10);
    c.get_b(20);
    c.display();
    c.view();
    return 0;
}