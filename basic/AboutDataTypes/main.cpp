#include <iostream>

using namespace std;

int main()
{
    int myNum = 5;
    float myFloatNum = 5.99;
    double myDoubleNum = 9.98;
    char myLetter = 'D';
    bool myBoolean = true;
    string myString = "Hello";
    cout << "myNum " << myNum << " myFloatNum " << myFloatNum << " myDoubleNum " << myDoubleNum << " myLetter " << myLetter << " myBoolean " << myBoolean << " myString " << myString << endl;
    float f1 = 35e3;
    double d1 = 12E4;
    cout << "f1 " << f1 << endl;
    cout << "d1 " << d1 << endl;
    char a = 65, b = 66, c = 67;
    cout << "a " << a << endl;
    cout << "b " << b << endl;
    cout << "c " << c << endl;
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    typedef int feet;
    feet distance = 5;
    cout << "distance is " << distance << endl;
    enum ice_cream
    {
        vanilla,
        chocolate,
        butterscotch,
        strawberry,
        mango,
        oreo
    };

    ice_cream myIceCream = butterscotch;
    cout << "myIceCream " << myIceCream << endl;
    if (2 == butterscotch)
    {
        cout << "true" << endl;
    }
    return 0;
}
