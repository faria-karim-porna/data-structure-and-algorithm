#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "The For Loop Iteration Number Is " << i << endl;
    }

    int j = 0;
    while (j < 5)
    {
        cout << "The While Loop Iteration Number Is " << j << endl;
        j++;
    }

    int k = 0;
    do
    {
        cout << "The Do While Loop Iteration Number Is " << k << endl;
        k++;
    } while (k > 0 && k < 5);

    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            cout << "The Nested For Loop Iteration Number Is " << a << " and " << b << endl;
        }
    }

    int c = 0;
    while (c < 2)
    {
        int d = 0;
        while (d < 2)
        {
            cout << "The Nested While Loop Iteration Number Is " << c << " and " << d << endl;
            d++;
        }
        c++;
    }

    int e = 0;
    do
    {
        int f = 0;

        do
        {
            cout << "The Nested Do While Loop Iteration Number Is " << e << " and " << f << endl;
            f++;
        } while (f > 0 && f < 2);
        e++;
    } while (e > 0 && e < 2);

    for (int l = 0; l < 5; l++)
    {
        cout << "The Break Statement Iteration Number Is " << l << endl;
        if (l == 3)
        {
            break;
        }
    }

    for (int m = 0; m < 10; m++)
    {
        if (m % 3 == 0)
        {
            continue;
        }
        cout << "The Continue Statement Iteration Number Is " << m << endl;
    }

    for (;;)
    {
        cout << "The Infinite For Loop" << endl;
    }

    while (1)
    {
        cout << "The Infinite While Loop" << endl;
    }

    do
    {
        cout << "The Infinite Do While Loop" << endl;
    } while (1);

    int p = 0;
    int n = 0;
LOOP:
    for (; n <= 20; n++)
    {
        cout << "The Goto Statement Iteration Number For P Is " << p << endl;
        if (p == 7)
        {
            goto EXIT;
        }
        if (n == 15)
        {
            goto LOOP;
        }
        if (n == 3)
        {
            goto PVALUE;
        }
        cout << "The Goto Statement Iteration Number Is " << n << endl;
        p++;
    }
PVALUE:
    p = 7;
    n = 2;
    goto LOOP;
EXIT:
    return 0;
}