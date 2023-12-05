#include<iostream>
using namespace std;
int sqrt(int x){
    int start=0, end=x,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid==x/mid)
        return mid;
        else if(mid < x / mid){
            ans=mid;
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return ans;

}
int main() {
    int n;
    cout<<"Enetr a number: ";
    cin>>n;
    cout<<"the square root of the number is "<<n<< " : "<<sqrt(n)<<endl;
    
}