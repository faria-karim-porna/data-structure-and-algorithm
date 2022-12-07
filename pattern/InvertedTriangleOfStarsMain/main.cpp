// Qusetion: https://practice.geeksforgeeks.org/problems/interesting-patterns1430/1?page=1&category[]=pattern-printing&sortBy=difficulty

#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> invIsoTriangle(int N)
    {
        int maxColumnNum = (N * 2) - 1;
        vector<string> rows;
        string eachRow = string(maxColumnNum, '*');
        for (int row = 0; row < N; row++)
        {
            rows.push_back(eachRow);
            eachRow[row] = ' ';
            eachRow[maxColumnNum - 1 - row] = ' ';
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
        vector<string> v = ob.invIsoTriangle(N);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << endl;
    }
    return 0;
}
