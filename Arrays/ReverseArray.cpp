/*
Make a program that takes an array , and then prints it
and then reverse the array and print it
e.g ->
Your input array:
 {1,2,3,4}
 Reversed array:
 {4,3,2,1}

 DO NOT print the same array in reverse, make A NEW ARRAY, which has the value in reverse
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter values: "<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your Array is: "<<endl;
    cout<<"{";
    for(int i =0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<"}"<<endl;
    cout<<"Your reversed Array: "<<endl;
    int posi=0;
    int ultiarr[size];
    for(int i=size-1;i>=0;i--){
        ultiarr[posi]=arr[i];
        posi++;
    }
    cout<<"{";
    for(int i =0;i<size;i++){
        cout<<ultiarr[i]<<",";
    }
    cout<<"}";
}