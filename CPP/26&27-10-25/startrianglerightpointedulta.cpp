/*
****
***
**
*
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of inverted triangle: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--)
            cout<<"* ";
        cout<<endl;
    }
}