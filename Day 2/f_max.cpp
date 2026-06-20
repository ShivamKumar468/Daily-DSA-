#include<iostream>
using namespace std;

int maxx(int a ,int b){
    if(a > b)
        return a;
    
    else return b;  // looked for return line
}

int main(){
  int a,b;
  cin>>a>>b;
  int result=maxx(a,b);
    cout<<result;
  
} 