// Qusetion: https://practice.geeksforgeeks.org/problems/y-shaped-pattern4351/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int maxColumSize = input + 1;
    for (int row = 0; row < input; row++)
    {
        for (int column = 0; column < maxColumSize; column++)
        {
            if (row <= (input / 2) - 1)
            {
                if (column == row || column == maxColumSize - 1 - row)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (column == input / 2)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
