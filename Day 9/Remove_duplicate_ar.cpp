#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,2,4,4,5,6};

    int i=0;
    for(int j=1; j<7; j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<i+1;
    }