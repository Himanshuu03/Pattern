#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
}