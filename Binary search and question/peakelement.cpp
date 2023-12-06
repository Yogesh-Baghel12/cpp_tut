#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int start=0, end=n-1, mid,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return mid;

        }
        else if(arr[mid]> arr[mid-1]){
            start = mid + 1;

        }
        else
        end=mid-1;
    }
    return -1;
}



int main(){
    int n,arr[1000];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    cout <<"the peak element of the index is: "<< peak(arr,n)<<endl;
    return 0;

 }