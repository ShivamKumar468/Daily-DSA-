/* To print
1
12
123
1234
*/

#include<iostream>
using namespace std;

int main(){
//int num=4;

for(int i=0; i<4; i++){
int n=1;
    for(int j=0; j<=i; j++){
        cout<<n;
        n++;
    }
    cout<<"\n";
}
}