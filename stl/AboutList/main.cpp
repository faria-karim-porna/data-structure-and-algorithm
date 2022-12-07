#include <iostream>
#include <list>
using namespace std;
list<int> listFunction(list<int> lists)
{
    list<int>::iterator iter = lists.begin();

    for (int i = 0; i < lists.size(); i++)
    {
        *iter = *iter + 1;
        advance(iter, 1);
    }
    return lists;
}
int main()
{
    list<string> l1;
    list<int> l3{1, 2, 3, 4};
    l1.push_back("javaTpoint ");
    l1.push_back("tutorial");
    list<string>::iterator it = l1.begin();
    advance(it, 1);
    l1.insert(it, "C++");

    cout << "Normal Loop" << endl;
    list<string>::iterator it1 = l1.begin();
    for (int i = 0; i < l1.size(); i++)
    {
        cout << *it1 << endl;
        advance(it1, 1);
    }

    cout << "Iterator Loop" << endl;
    for (list<string>::iterator itr = l1.begin(); itr != l1.end(); ++itr)
    {
        cout << *itr << endl;
    }

    it1 = l1.begin();
    advance(it1, 1);
    *it1 = "STL";
    it1 = l1.begin();
    cout << "After updating l1" << endl;
    for (int i = 0; i < l1.size(); i++)
    {
        cout << *it1 << endl;
        advance(it1, 1);
    }

    list<string> l2;
    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;
        l2.push_back(str);
    }

    cout << "Print Loop For l2 after pushing back" << endl;
    list<string>::iterator it2 = l2.begin();
    for (int i = 0; i < l2.size(); i++)
    {
        cout << *it2 << endl;
        advance(it2, 1);
    }

    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;
        l2.push_front(str);
    }

    it2 = l2.begin();
    cout << "Print Loop For l2 after pushing front" << endl;
    for (int i = 0; i < l2.size(); i++)
    {
        cout << *it2 << endl;
        advance(it2, 1);
    }

    l2.pop_back();
    l2.pop_front();
    it2 = l2.begin();
    cout << "After deleting last element and first element from l2" << endl;
    for (int i = 0; i < l2.size(); i++)
    {
        cout << *it2 << endl;
        advance(it2, 1);
    }

    l2.clear();
    it2 = l2.begin();
    cout << "After removing all the element from l2" << endl;
    for (int i = 0; i < l2.size(); i++)
    {
        cout << *it2 << endl;
        advance(it2, 1);
    }
    list<int> newList = listFunction(l3);
    list<int>::iterator it3 = newList.begin();
    cout << "From function" << endl;
    for (int i = 0; i < newList.size(); i++)
    {
        cout << *it3 << endl;
        advance(it3, 1);
    }
    return 0;
}
