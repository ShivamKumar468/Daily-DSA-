#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,4,5,6,7,77,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target =7;
    int result=-1;//-1 indicates if element not found
    for(int i=0;i<n;i++){
        if(arr[i]==target){
        result=i;
        break;
    }
}
    cout<<result;
}