#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,5,6,1,6};
    int s=sizeof(arr)/ sizeof(arr[0]);
    int  l= s/2;

    for(int i=0; i<s/2; i++){
        cout<<arr[i]<<" "<<arr[l]<<" ";
        l++;
        
    }
    
}