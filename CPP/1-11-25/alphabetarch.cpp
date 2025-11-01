#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n(odd): ";
    cin >> n;
    int ml = n / 2 + 1;
    for (int i = 1; i <= ml; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= ml - (i - 1) || j >= ml + (i - 1))
                cout << (char)(j+64) << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}