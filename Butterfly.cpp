#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:-"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=n;k>i+1;k--){
            cout<<" ";
        }
        for(int l=n;l>i+1;l--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int l=n;l>i;l--){
            cout<<"*";
        }
        cout<<endl;
    }
}