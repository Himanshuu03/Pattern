#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int k =0;
    for(int i=0;i<n;i++){
        k =i;
        for(int j=0;j<=i;j++,k++){
            cout<<k+1<<" ";
        }
        cout<<endl;
    }
}