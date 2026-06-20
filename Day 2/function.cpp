/*Function without parameter and without return type

#include<iostream>
using namespace std;

void printname(){
    cout<<"Shivam";
}
int main(){
printname();
} 

*/

// Function with parameter

#include<iostream>
using namespace std;

void printname(string name){
    cout<<"Shivam";

}
int main(){
string name;
cin>>name;
printname(name);
return 0;

}

/*
#include<iostream>
using namespace std;

void printname(string name ){
    cout<<"Shivam"<<name<<endl;

}
int main(){
string name;
cin>>name;
printname(name);

string name2;
cin>>name2;
printname(name2);
return 0;
}
*/