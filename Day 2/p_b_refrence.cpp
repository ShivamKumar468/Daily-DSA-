#include<iostream>
using namespace std;

void doSomething(int &num){ // here we pass the address of actual value using &
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num;
}

// we pass the address of actual value to function so any change in function
// will change the real value. 