#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of rhombhus: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--)
            cout<<"  ";
        for(int k=1;k<=n;k++)
            cout<<"* ";
        cout<<endl;
    }
}