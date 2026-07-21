#include <iostream>
#include <array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,3> a={1,2,3};
    int size=sizeof(basic)/sizeof(basic[0]);
    int size1=a.size();

    for(int i=0;i<size;i++){
        cout<<basic[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size1;i++){
        cout<<a[i]<<" ";
    }
    
    
    cout<<"Element at index 2: "<<a.at(2)<<endl;
    cout<<"Is array empty: "<<a.empty()<<endl;
    cout<<"First element: "<<a.front()<<endl;
    cout<<"Last element: "<<a.back()<<endl;
}