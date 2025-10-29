#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter no of rows: ";
    cin>>row;
    cout<<"Enter no of cols: ";
    cin>>col;
    for(int i=0;i<row;i++) { // no of rows
        for(int j=0;j<col;j++){ //no of cols
            cout<<"* ";
        }
        cout<<endl;       
    }
}