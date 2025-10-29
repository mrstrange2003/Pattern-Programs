#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of odd nos: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<= (2*i+1);j+=2)
            cout<<j<<" ";
        cout<<endl;
    }
}