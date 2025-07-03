/*
Write a program to find and print the MAX and MIN value in an arrray
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // for(int i=0;i<size;i++){
    //     cout<<"Your array: "<<arr[i]<<endl;
    // }
    int max=0;
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"The maximum value is: "<<max<<endl;
    cout<<"The minimum value is: "<<min<<endl;
}