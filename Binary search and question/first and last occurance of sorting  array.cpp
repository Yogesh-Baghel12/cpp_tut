#include<iostream>
using namespace std;
int  Search(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int last=-1;
    int first=-1;
    while (start<=end) {
        int mid = start+(end-start/2);
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
             start=mid+1;
        else
            end=mid-1;
    }
    while (start<=end) {
        int mid = start+(end-start/2);
        if(arr[mid]==key){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
             start=mid+1;
        else
            end=mid-1;
    }
    return first , last; 

}


int main(){
    int n,arr[1000];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    int key;
    cout<<"Finding which key:";
    cin>>key;
    cout << Search(arr,n,key);
    return 0;

 }