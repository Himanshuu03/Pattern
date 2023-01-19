#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int k =0;
    for(int i=0;i<n;i++){
        k=i;
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<k+1;
            k++;
        }
        cout<<endl;
    }
}