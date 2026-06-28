#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
     int m=n%10;   
     sum+=m;
     n=n/10;
    }
    cout<<sum;

}