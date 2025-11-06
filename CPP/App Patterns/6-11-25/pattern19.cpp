/*
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 
0 1 0 1 0 
1 0 1 0 1 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if((i%2==1 && j%2==0) || (i%2==0 && j%2==1) )
                cout<<1<<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }
}