#include<iostream>
using namespace std;

int fun(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f*=i;
    }
    return f;
}
int ncr(int n,int r ){
    int factorial_n=fun(n);
    int factorial_r=fun(r);
    int factorial_nmr=fun(n-r);

    return factorial_n/(factorial_r*factorial_nmr);

}
int main(){
    int n=6; int r=5;
    int result= ncr( n, r);
    cout<<result;

}