#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    int left=0;
    int right=5-1;
    while(left<right){
       swap(arr[left],arr[right]);
        left++;
        right--;
        
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

