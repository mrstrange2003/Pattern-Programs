#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of lines(odd): ";
    cin>>n;
    int nsp= n/2;
    int nst;
    int ml=n/2+1;
    for(int i=1;i<=n;i++){
        if(i<ml){
            nsp=ml-i;
            nst=2*i-1;
        }
        else{
            nsp=i-ml;
            nst=2*(n-i)+1;
        }
        for(int j=1;j<=nsp;j++)
            cout<<"  ";
        for(int k=1;k<=nst;k++)
            cout<<"* ";
        cout<<endl;
        
    }
}