#include <iostream>

using namespace std;

int main()
{
    string phones[4];
    int sizeOfPhones = sizeof(phones) / sizeof(string);
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << "cars[0] is " << cars[0] << endl;
    cout << "Before updating cars names are"<< endl;
    for (int i = 0; i < cars->size(); i++)
    {
        cout << cars[i] << "\n";
    }
    cars[2] = "Tata";
    cout << "After updating cars names are"<< endl;
    for (int i = 0; i < cars->size(); i++)
    {
        cout << cars[i] << "\n";
    }
    cout << "Enter 4 phone names" << endl;
    for (int i = 0; i < sizeOfPhones; i++)
    {
        cin >> phones[i];
    }
    cout << "Your picked up 4 phone names are" << endl;
    for (int i = 0; i < sizeOfPhones; i++)
    {
        cout << phones[i] << endl;
    }
    int numbers[] = {10, 20, 50, 11, 22, 33};
    int sizeOfNumbers = sizeof(numbers) / sizeof(int);
    cout << "Print numbers " << endl;
    for (int i = 0; i < sizeOfNumbers; i++)
    {
        cout << numbers[i] << "\n";
    }

    return 0;
}
