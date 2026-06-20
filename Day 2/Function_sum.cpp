#include<iostream>
using namespace std;

int sum(int a, int b){
   int c=a+b;
   return c;
}
int main(){
int a,b;
cin>> a >> b;
int add= sum(a,b);

cout<<add;
}