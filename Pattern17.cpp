#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int k = 65;
    for(int i=0;i<n;i++){
        k = 65+i;
        for(int j=0;j<=i;j++,k++){
            cout<<char(k)<<" ";
        }
        cout<<endl;
    }
}