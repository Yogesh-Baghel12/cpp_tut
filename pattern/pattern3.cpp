#include<iostream>
using namespace std;


int main(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<=3;j++){
            char s='a'+j;
            cout<<s<<" ";
        }
        cout<<endl;
    }
}