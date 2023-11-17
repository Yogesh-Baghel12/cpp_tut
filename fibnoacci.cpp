#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int c=0;
    int i;
    cout<< a <<" "<< b<<" ";
    for(i=0;i<=5;i=i+1){
        c=a+b;
        a=b;
        b=c;
        cout<< c<<" ";
    }
}