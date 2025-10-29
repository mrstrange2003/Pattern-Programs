#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int o=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<o<<" ";
            o+=2;
        }
        cout<<endl;
    }
}