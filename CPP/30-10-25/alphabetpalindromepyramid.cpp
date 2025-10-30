#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--)
            cout<<"  ";
        for(int k=1;k<=i;k++)
            cout<<(char)(k+64)<<" ";
        for(int k=i-1;k>=1;k--)
            cout<<(char)(k+64)<<" ";
        cout<<endl;
    }
}