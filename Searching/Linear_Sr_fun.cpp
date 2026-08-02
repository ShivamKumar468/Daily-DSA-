#include <iostream>
using namespace std;

int linearSearch(int arr[],int target,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1; 
}

int main(){
    int arr[]={3,4,3,2,23,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target =23;
    int result=linearSearch(arr,target,n);
    cout<<"Element found at index: "<<result<<endl;
}