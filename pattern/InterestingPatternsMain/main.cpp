// Qusetion: https://practice.geeksforgeeks.org/problems/interesting-patterns1430/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> interestingPattern(int N)
    {
        int maxRowNum = (N * 2) - 1;
        vector<string> rows(maxRowNum);
        int multiplier;
        int value = N;
        string valueString;
        int eachRowMiddle;
        string eachRowMiddleString;
        string frontString = "";
        string backString = "";

        string multiplierString = string(maxRowNum, '1');

        for (int row = 0; row < N; row++)
        {
            value = N - row;
            multiplier = stoi(multiplierString);

            eachRowMiddle = value * multiplier;
            eachRowMiddleString = to_string(eachRowMiddle);

            rows[row] = eachRowMiddleString;
            rows[maxRowNum - 1 - row] = eachRowMiddleString;

            multiplierString.pop_back();
            multiplierString.pop_back();
        }

        for (int row = 0; row < N; row++)
        {
            if (row == N - 1)
            {
                rows[row] = frontString + rows[row] + backString;
            }
            else
            {
                rows[row] = frontString + rows[row] + backString;
                rows[maxRowNum - 1 - row] = frontString + rows[maxRowNum - 1 - row] + backString;
            }
            value = N - row;
            frontString = frontString + to_string(value);
            backString = to_string(value) + backString;
        }

        return rows;
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
        vector<string> v = ob.interestingPattern(N);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << endl;
    }
    return 0;
}
