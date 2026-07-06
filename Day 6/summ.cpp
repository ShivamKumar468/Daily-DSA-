#include<iostream>
using namespace std;

int main(){
    int target =7;
    int arr[]={2,4,5,6,9};
    int sum=0;

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            sum=arr[i]+arr[j];
            if(sum==target)
            cout<<i<<","<<j;
        }
    }
}