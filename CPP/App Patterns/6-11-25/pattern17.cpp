/*
1 3 5 7 9
3 5 7 9 11
5 7 9 11 13
7 9 11 13 15
9 11 13 15 17
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2){
        int m=i;
        for(int j=1;j<=n;j++){
            cout<<m<<" ";
            m+=2;
        }
        cout<<endl;
    }
}