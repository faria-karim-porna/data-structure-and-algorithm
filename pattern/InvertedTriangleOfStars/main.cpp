// Qusetion: https://practice.geeksforgeeks.org/problems/interesting-patterns1430/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int maxRowAndColumSize = (input * 2) - 1;
    for (int row = 0; row < input; row++)
    {
        for (int column = 0; column < maxRowAndColumSize; column++)
        {
            if (column >= row && column < maxRowAndColumSize - row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
