/*
To print 
****
***
**
*

*/
/*
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    //int s;
    //cin>>s;
    for(int i= n; i>=1; i--){
    
        for(int j=1; j<=i; j++){
        
            cout<<"*";
        }
        cout<<"\n";
    }
}

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    //int s;
    //cin>>s;
    for(int i= 0; i<n; i++){
    
        for(int j=1; j<n-i+1; j++){
        
            cout<<"*";
        }
        cout<<"\n";
    }
}