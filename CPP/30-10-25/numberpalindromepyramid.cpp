#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of lines: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--)
            cout<<"  ";
        for(int k=1;k<=i;k++)
            cout<<k<<" ";
        if(i!=1){
            for(int j=i-1;j>=1;j--)
                cout<<j<<" ";
        }
        cout<<endl;
    }
}