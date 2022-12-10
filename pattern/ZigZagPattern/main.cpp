// Qusetion: https://www.youtube.com/watch?v=k9OlCJFy5yo&t=1400s
#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    int maxRowSize = (((input + 1) / 2) + 1) / 2;
    int maxColumnSizeOf1stTriangle = (maxRowSize * 2) - 1;

    for (int row = 0; row < maxRowSize; row++)
    {
        for (int column = 0; column < input; column++)
        {
            if (column <= maxColumnSizeOf1stTriangle - 1)
            {
                if (column == (maxRowSize - 1) - row || column == (maxRowSize - 1) + row)
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
                if (column == (maxColumnSizeOf1stTriangle - 1) + ((maxRowSize - 1) - row) || column == (maxColumnSizeOf1stTriangle - 1) + ((maxRowSize - 1) + row))
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
