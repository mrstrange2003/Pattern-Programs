#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of cross(odd): ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i%2!=0 || j%2!=0)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}