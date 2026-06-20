#include<iostream>
using namespace std;

void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num;      /* here when we print after calling function and making 
                    some change above but there is no any change in value in main function 
                    This is called pass by value copy of actual value is goes to function and any
                    chane in function does not affect real value in main function */
    return 0;       // also we do same with string and change its character by index in function    
}                    // and real value with will not change and also with other data type

// so to cahnge the real value we use pass by refrence in which adress of actual 
//value is pased and any change inside function will chnage the real value in main function