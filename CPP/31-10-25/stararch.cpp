#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
        cout<<"* ";
    cout<<endl;
    for(int i=2;i<=n;i++){
        for(int j=n-i+1;j>=1;j--)
            cout<<"* ";
        for(int k=1;k<=2*(i-1)-1;k++)
            cout<<"  ";
        for(int l=n-i+1;l>=1;l--)
            cout<<"* ";
        cout<<endl;
    }
}