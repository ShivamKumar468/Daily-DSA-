#include<iostream>
using namespace std;
int main(){
    vector<int> v;//vector of size 0
    vector<int> v1(5,1);//vector of size 5 with all elements as 1
    cout<<"Size of vector v: "<<v.size()<<endl;
    cout<<"Size of vector v1: "<<v1.size()<<endl;
    vector<int> v2(v1);//copy constructor
    cout<<"Size of vector v2: "<<v2.size()<<endl;
    vector<int> v3(v1.begin(),v1.end());//range constructor
    cout<<"Size of vector v3: "<<v3.size()<<endl;
    cout<<"capacity of v"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity of v after push_back: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity of v after push_back: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity of v after push_back "<<v.capacity()<<endl;
    cout<<"size of v "<<v.size()<<endl;
    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"front "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;
    cout<<"before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"after pop "<<endl;
    for(int j:v){
        cout<<j<<" ";
    } cout<<endl;
    vector<int>vs(v);
    cout<<vs.size();
    return 0;
