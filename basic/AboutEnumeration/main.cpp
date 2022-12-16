#include <iostream>

using namespace std;
enum week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    week day;
    day = Friday;
    cout << "Day: " << day + 1 << endl;
    cout << "Friday is the " << Friday + 1 << " day of the week" << endl;
    return 0;
}
