/* Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
A number ends with digit d if its last digit is d.
Example 1
Input: d = 1
Output: 12300
Explanation:
The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
Their sum is 12300. */

#include<iostream>
using namespace std;

int main(){
    int d;
    cin>>d;

    int num=0;       
    int sum=0;
    int count=0;

    while(count<50){
       if(num%10==d){
       sum+=num;
       count++;
    }
    num++;
}
    cout<<sum;
}


/* Explanation 
Start checking numbers from 1 and continue until 50 numbers ending with digit d are found.
Use num % 10 == d to check whether the last digit of the current number is d.
If it matches, add the number to sum and increase count.
After checking each number, increment num; when count reaches 50, print the final sum.
*/