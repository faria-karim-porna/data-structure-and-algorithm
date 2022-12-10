#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 5, c = 11;

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

    if (b == 5)
    {
        if (c == 2)
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
        else if (c == 7)
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
        else
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
    }
    else if (b == 7)
    {
        if (c == 2)
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
        else
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
    }
    else
    {
        if (c == 1)
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
        else
        {
            cout << "The value of b is " << b << " and c is " << c << endl;
        }
    }
    string text = "yes";
    text == "yes" ? cout << "Yahooo" << endl : cout << "Oh noooo" << endl;

    char alpha = 'c';
    switch (alpha)
    {
    case 'a':
        cout << "The first alphabet" << endl;
        break;
    case 'b':
        cout << "The second alphabet" << endl;
        break;
    case 'c':
        cout << "The third alphabet" << endl;
        break;
    default:
        cout << "The default alphabet" << endl;
        break;
    }

    int day = 4;
    int value1 = 1;
    int value2 = 2;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    case 2:
        cout << "Tuesday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    case 3:
        cout << "Wednesday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    case 4:
        cout << "Thursday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    case 5:
        cout << "Friday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    case 6:
        cout << "Saturday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    case 7:
        cout << "Sunday" << endl;
        switch (value1 <= value2)
        {
        case 1:
            cout << "Yipppieeee Day" << endl;
            break;

        default:
            cout << "Phiiii Day" << endl;
            break;
        }
        break;
    }
    return 0;
}
