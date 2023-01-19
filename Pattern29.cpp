#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int a = 90;
    for (int i = 0; i < n; i++)
    {
        a = 90-i;
        for(int j=0;j<n;j++){
            cout<<char(a);    
        }
        cout<<endl;
    }
    
}