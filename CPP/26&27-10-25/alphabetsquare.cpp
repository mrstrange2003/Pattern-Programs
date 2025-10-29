#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of square: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=65;j<65+n;j++)
            cout<<(char)j<<" ";
        cout<<endl;
    }
}

