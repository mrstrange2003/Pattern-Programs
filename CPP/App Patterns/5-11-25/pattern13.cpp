/*
1 10 11 20 21
2 9 12 19 22
3 8 13 18 23
4 7 14 17 24
5 6 15 16 25
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x,y;
    for(int i=1;i<=n;i++){
        x=i;
        y=n-i+1;
        for(int j=1;j<=n;j++){
            if(j%2==1)
                cout<<x<<" ";
            else
                cout<<y<<" ";
            x+=n;
            y+=n;
        }
        cout<<endl;
    }
}