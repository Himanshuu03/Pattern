#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int k =0;
    for(int i=0;i<n;i++){
        for(int k=n;k>i+1;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<k+1;
            k++;
        }
        cout<<endl;
    }
}