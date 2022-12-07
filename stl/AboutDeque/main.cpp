#include <iostream>
#include <deque>
using namespace std;
deque<int> dequeFunction(deque<int> dque)
{
    for (int i = 0; i < dque.size(); i++)
    {
        dque[i] = dque[i] + 1;
    }
    return dque;
}
int main()
{
    deque<string> dq1;
    deque<int> dq3{1, 2, 3, 4};
    dq1.push_back("javaTpoint ");
    dq1.push_back("tutorial");
    dq1.insert(dq1.begin() + 1, "C++");
    cout << "Normal Loop" << endl;
    for (int i = 0; i < dq1.size(); i++)
    {
        cout << dq1[i] << endl;
    }

    cout << "Iterator Loop" << endl;
    for (deque<string>::iterator itr = dq1.begin(); itr != dq1.end(); ++itr)
    {
        cout << *itr << endl;
    }

    dq1[1] = "STL";
    cout << "After updating dq1" << endl;
    for (int i = 0; i < dq1.size(); i++)
    {
        cout << dq1[i] << endl;
    }

    deque<string> dq2;
    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;
        dq2.push_back(str);
    }

    cout << "Print Loop For dq2 after pushing back" << endl;
    for (int i = 0; i < dq2.size(); i++)
    {
        cout << dq2[i] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;
        dq2.push_front(str);
    }
    cout << "Print Loop For dq2 after pushing front" << endl;
    for (int i = 0; i < dq2.size(); i++)
    {
        cout << dq2[i] << endl;
    }

    dq2.pop_back();
    dq2.pop_front();
    cout << "After deleting first element and last element from dq1" << endl;
    for (int i = 0; i < dq2.size(); i++)
    {
        cout << dq2[i] << endl;
    }

    dq2.erase(dq2.begin() + 1);
    cout << "After erasing 2nd element from dq2" << endl;
    for (int i = 0; i < dq2.size(); i++)
    {
        cout << dq2[i] << endl;
    }

    dq2.clear();
    cout << "After removing all the element from dq2" << endl;
    for (int i = 0; i < dq2.size(); i++)
    {
        cout << dq2[i] << endl;
    }

    deque<int> newDque = dequeFunction(dq3);
    cout << "From function" << endl;
    for (int i = 0; i < newDque.size(); i++)
    {
        cout << newDque[i] << endl;
    }
    return 0;
}
