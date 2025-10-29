#include<iostream>
using namespace std;
void triangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the triangle: ";
    cin>>n;
    triangle(n);
    return 0;
}