/*Given two integers low and high, return the sum of all integers from low to high inclusive.


Example 1

Input: low = 1, high = 5

Output: 15

Explanation: 1 + 2 + 3 + 4 + 5 = 15*/




#include<iostream>
using namespace std;
int main(){
    int sum =0;
    for(int i=1; i<=5; i++){
sum+= i;

    }
    cout<<"Sum: "<<sum;
}