#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int k = 64+n;
    for(int i=0;i<n;i++){
        k = 64+n-i;
        for(int j=0;j<=i;j++,k++){
            cout<<char(k)<<" ";
        }
        cout<<endl;
    }
}