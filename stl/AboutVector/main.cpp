#include <iostream>
#include <vector>
using namespace std;
vector<int> vectorFunction(vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        vect[i] = vect[i] + 1;
    }
    return vect;
}
int main()
{
    vector<string> v1;
    vector<int> v3{1, 2, 3, 4};
    v1.push_back("javaTpoint ");
    v1.push_back("tutorial");
    v1.insert(v1.begin() + 1, "C++");
    cout << "Normal Loop" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    cout << "Iterator Loop" << endl;
    for (vector<string>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
    {
        cout << *itr << endl;
    }

    v1[1] = "STL";
    cout << "After updating v1" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    vector<string> v2;
    for (int i = 0; i < 3; i++)
    {
        string str;
        cin >> str;
        v2.push_back(str);
    }

    cout << "Print Loop For v2" << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    v1.pop_back();
    cout << "After deleting last element from v1" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << endl;
    }

    v2.erase(v2.begin() + 1);
    cout << "After erasing 2nd element from v2" << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    v2.clear();
    cout << "After removing all the element from v2" << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << endl;
    }

    vector<int> newVect = vectorFunction(v3);
    cout << "From function" << endl;
    for (int i = 0; i < newVect.size(); i++)
    {
        cout << newVect[i] << endl;
    }
    return 0;
}
