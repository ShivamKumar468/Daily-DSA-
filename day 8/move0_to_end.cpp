#include<iostream>
using namespace std;
int main(){

    int arr[]= {12,3,4,5,0,4,0,4,5};
    int a= arr[0];
    int s=0;
    for(int i=0; i<a.size();i++){
        if(arr[i]!=0){
            swap(arr[s++],arr[0]);
        }

    }
}