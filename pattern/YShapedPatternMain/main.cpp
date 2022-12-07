// Qusetion: https://practice.geeksforgeeks.org/problems/y-shaped-pattern4351/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> yShapedPattern(int N)
    {
        int maxColumSize = N + 1;
        vector<string> rows;
        string eachRow;
        for (int row = 0; row < N; row++)
        {
            eachRow = string(maxColumSize, ' ');
            if (row <= (N / 2) - 1)
            {
                eachRow[row] = '*';
                eachRow[maxColumSize - 1 - row] = '*';
            }
            else
            {
                eachRow[N / 2] = '*';
            }
            rows.push_back(eachRow);
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
        vector<string> v = ob.yShapedPattern(N);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << endl;
    }
    return 0;
}
