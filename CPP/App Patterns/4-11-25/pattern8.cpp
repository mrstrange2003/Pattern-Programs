/*
2 4 6 8 10 
12 14 16 18 20 
22 24 26 28 30 
32 34 36 38 40 
42 44 46 48 50 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int m=2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<m<<" ";
            m+=2;
        }
        cout<<endl;
    }
}