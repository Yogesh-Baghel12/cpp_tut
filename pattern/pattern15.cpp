#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        
        for(j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            char n='A'+j-1;
            cout<<n;
        }
        cout<<endl;
    }
}