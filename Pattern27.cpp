#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:-"<<endl;
    cin>>n;
    int a = 65;
    int k =0;
    int l =2;
    for(int i =1;i<=n;i++){
        int a = 65,k=0,l=2;
        if(i%2 != 0){
            for(int j =0;j<n;j++){
                cout<<char(a+k);
                k=k+2;
            }
        }
        else if(i%2 == 0){
            for(int k =n;k>0;k--){
                cout<<char(65+(2*n)-l);
               l=l+2;
            }
        }
        cout<<endl;
    }
}