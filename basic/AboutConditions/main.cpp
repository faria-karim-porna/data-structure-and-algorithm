#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    if (a == 1)
    {
        cout << "first" << endl;
    }
    else if (a == 2)
    {
        cout << "second" << endl;
    }
    else if (a == 3)
    {
        cout << "third" << endl;
    }
    else
    {
        cout << "other" << endl;
    }

    string text = "yes";
    text == "yes" ? cout << "Yahooo" << endl : cout << "Oh noooo" << endl;
    return 0;
}
