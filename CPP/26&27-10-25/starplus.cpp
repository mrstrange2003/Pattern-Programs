#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an odd no: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == (n / 2 + 1))
        {
            for (int k = 1; k <= n; k++)
                cout << "* ";
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == (n / 2 + 1))
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
}