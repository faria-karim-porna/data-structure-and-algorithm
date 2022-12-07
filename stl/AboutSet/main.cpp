#include <iostream>
#include <set>
using namespace std;
set<int> setFunction(set<int> sets)
{
    set<int>::iterator itr = sets.begin();
    // for (int i = 0; i < sets.size(); i++)
    // {
    //     *itr = *itr + 1;
    //     advance(itr, 1);
    // }
    return sets;
}
int main()
{
    set<string> s1;
    set<int> s3{4, 2, 1, 3, 4};
    s1.insert("javaTpoint ");
    s1.insert("tutorial");
    s1.insert("C++");

    set<string>::iterator itr1 = s1.begin();
    cout << "Normal Loop" << endl;
    for (int i = 0; i < s1.size(); i++)
    {
        cout << *itr1 << endl;
        advance(itr1, 1);
    }

    cout << "Iterator Loop" << endl;
    for (set<string>::iterator itr = s1.begin(); itr != s1.end(); ++itr)
    {
        cout << *itr << endl;
    }

    // itr1 = s1.begin();
    // advance(itr1, 1);
    // *itr1 = "STL";
    // itr1 = s1.begin();
    // cout << "After updating s1" << endl;
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     cout << *itr1 << endl;
    //     advance(itr1, 1);
    // }

    // set<string> s2;
    // for (int i = 0; i < 3; i++)
    // {
    //     string str;
    //     cin >> str;
    //     s2.insert(str);
    // }

    // cout << "Print Loop For s2" << endl;
    // for (int i = 0; i < s2.size(); i++)
    // {
    //     cout << s2[i] << endl;
    // }

    // s1.pop_back();
    // cout << "After deleting last element from s1" << endl;
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     cout << s1[i] << endl;
    // }

    // s2.erase(s2.begin() + 1);
    // cout << "After erasing 2nd element from s2" << endl;
    // for (int i = 0; i < s2.size(); i++)
    // {
    //     cout << s2[i] << endl;
    // }

    // s2.clear();
    // cout << "After removing all the element from s2" << endl;
    // for (int i = 0; i < s2.size(); i++)
    // {
    //     cout << s2[i] << endl;
    // }

    set<int> newSet = setFunction(s3);
    set<int>::iterator itr3 = newSet.begin();
    cout << "From function" << endl;
    for (int i = 0; i < newSet.size(); i++)
    {
        cout << *itr3 << endl;
        advance(itr3, 1);
    }
    return 0;
}
