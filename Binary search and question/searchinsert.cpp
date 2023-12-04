#include<iostream>
using namespace std;

int Search_insert(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=n;
    while (start<=end) {
        int mid = start+(end-start/2);
        if(arr[mid]==key){
            ans=mid;
            break;
        }
        else if(arr[mid]<key)
             start=mid+1;
        else{
            ans=mid;
            end=mid-1;
            break;
        }
            
    }
    return ans;

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
    cout <<Search_insert(arr,n,key)<<endl;
    return 0;

 }