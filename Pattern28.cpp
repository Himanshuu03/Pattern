#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int k =0;
    for(int i =1;i<=n;i++){
        if(i%2 != 0){
            for(int j =0;j<n;j++){
                cout<<j+1;
            }
        }
        else if(i%2 == 0){
            for(int k =n;k>0;k--){
                cout<<k;
            }
        }
        cout<<endl;
    }
}