// Qusetion: https://practice.geeksforgeeks.org/problems/interesting-patterns1430/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int value;
    int maxRowAndColumSize = (input * 2) - 1;
    for (int row = 0; row < maxRowAndColumSize; row++)
    {
        value = input + 1;
        for (int column = 0; column < maxRowAndColumSize; column++)
        {
            if (row < input)
            {
                if (column <= row)
                {
                    value = value - 1;
                }
                if (column >= maxRowAndColumSize - row)
                {
                    value = value + 1;
                }
            }
            else
            {
                if (column < maxRowAndColumSize - row)
                {
                    value = value - 1;
                }
                if (column > row)
                {
                    value = value + 1;
                }
            }
            cout << value;
        }
        cout << endl;
    }
    return 0;
}
