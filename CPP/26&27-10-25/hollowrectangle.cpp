#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;
    for(int i=1;i<=b;i++){
        for(int j=1;j<=l;j++){
            if(i==1 || i==b || j==1 || j==l)
                cout<<"* ";
            else    
                cout<<"  ";
        }
        cout<<endl;
    }
}