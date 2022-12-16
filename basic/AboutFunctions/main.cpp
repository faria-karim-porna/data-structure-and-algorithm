#include <iostream>

using namespace std;
int calculateSum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    return result;
}

void changeDataByValue(int data)
{
    data = 5;
}

void changeDataByPointer(int *data)
{
    *data = 5;
}

void changeDataByReference(int &data)
{
    data = 5;
}

int main()
{
    int value1 = 5, value2 = 11;
    cout << calculateSum(value1, value2) << endl;

    int data = 3;
    changeDataByValue(data);
    cout << "Value of the data after calling changeDataByValue: " << data << endl;

    int x = 3;
    changeDataByPointer(&x);
    cout << "Value of the data after calling changeDataByPointer: " << x << endl;

    int y = 3;
    changeDataByReference(y);
    cout << "Value of the data after calling changeDataByReference: " << y << endl;

    return 0;
}
