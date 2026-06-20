#include<iostream>
using namespace std;

void doSomething(int arr[], int n){
    arr[0]+=100;
    cout<<arr[0]<<"\n";
}
int main(){
int n=5;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];

}
doSomething( arr, n);
cout<<arr[0];
}

// array is itself pass by refrece any change in function will chnage the value 
// in main function , original value will change no ned to use & in function