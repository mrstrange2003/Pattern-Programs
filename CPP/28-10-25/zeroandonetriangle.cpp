#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(a%2!=0)
                cout<<1<<" ";
            else    
                cout<<0<<" ";
            a++;
        }
        cout<<endl;
    }
}