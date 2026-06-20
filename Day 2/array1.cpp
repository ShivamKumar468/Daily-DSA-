/*
#include<iostream>
using namespace std;
 int main(){

    int arr[5];
    cin>>arr[0] >> arr[1]>> arr[2] >>arr[3] >> arr[3];

    cout<<arr[0]<<endl<< arr[1]<<endl<<arr[2]<<endl<<arr[3]<<endl <<arr[4];
    return 0;
 }
*/
/* 
#include<iostream>
 using namespace std;
 int main(){

    int arr[5]={3,4,7,9};
    for(int i=0;i<=4;i++){
    cout<<arr[i]<<endl;
}}
    */
/*

 #include<iostream>
 using namespace std;

 int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        //cin>>arr[i];        // here it will not run because it array is nor initialized
        cout<<arr[i]<<"\n";  //we cannot print array by indexing also 
                            //without initialize it
    }                    // we can print but using cin to take input from user for array
 }
*/

/*
#include<iostream>
 using namespace std;

 int main(){
    int arr[5]={0,8,9,0,5};
    for(int i=0; i<=4; i++){
                             
        cout<<arr[i]<<"\n";   
                            

    }
 }
*/



#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        cin>>arr[i];
    }

  for(int i=0; i<=4; i++){
    cout<<arr[i];
  }  
}
