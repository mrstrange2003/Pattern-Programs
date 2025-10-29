#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of right triangle: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++)
            cout<<(char)(j+65)<<" ";
        cout<<endl;
    }
}