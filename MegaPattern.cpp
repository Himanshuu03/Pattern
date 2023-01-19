#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n:-"<<endl;
    cin>>n;
    int k =1;
    int q =5;
    for(int i=0;i<n;i++){
        k=1;
        for(int j=n;j>i;j--,k++){
            cout<<k;
        }
        for(int k =0 ;k<i;k++){
            cout<<"*";
        }
        for(int l =0 ;l<i;l++){
            cout<<"*";
        }
        for(int m = 0;m<n-i;m++){
            cout<<q-m-i;
        }
        cout<<endl;
    }
}