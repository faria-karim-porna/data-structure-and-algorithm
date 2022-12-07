// Qusetion: https://practice.geeksforgeeks.org/problems/print-this-pattern0709/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printPattern(int N)
    {
        int value;
        int maxRowAndColumSize = (N * 2) - 1;
        for (int row = 0; row < maxRowAndColumSize; row++)
        {
            value = N + 1;
            for (int column = 0; column < maxRowAndColumSize; column++)
            {
                if (row < N)
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
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        ob.printPattern(N);
    }
    return 0;
}
