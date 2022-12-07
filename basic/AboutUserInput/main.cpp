#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << "a is " << a << endl;
    cin.ignore();
    string name;
    getline(cin, name);
    cout << "Your name is " << name << endl;
    string profile;
    cout << "Enter your profile :" << endl;
    getline(cin, profile, ' ');
    cout << "Profile is :" << profile << endl;
    char fruits[50];
    cout << "Enter your favorite fruit: " << endl;
    cin.getline(fruits, 50);
    cout << "Your favorite fruit is :" << fruits << endl;
    return 0;
}
