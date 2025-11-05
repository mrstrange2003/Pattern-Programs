/*
5 10 15 20 25 
4 9 14 19 24 
3 8 13 18 23 
2 7 12 17 22 
1 6 11 16 21 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        int m=i;
        for(int j=1;j<=n;j++){
            cout<<m<<" ";
            m+=n;
        }
        cout<<endl;
    }
}