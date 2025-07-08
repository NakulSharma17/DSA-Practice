//LEVEL EAZYYYYYY

/*

1. Count Even and Odd Numbers in an Array
Problem Statement:
Write a program to count how many elements in a given array are even and how many are odd.


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Values: "<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your Array is: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" "<<endl;
    }
    int codd=0;
    int ceven=0;
    for(int i =0;i<size;i++){
        if(arr[i]%2==0){
            ceven++;
        }
        else{
            codd++;
        }
    }
    cout<<"Your Odd Values: "<<codd<<endl;
    cout<<"Your Even Values: "<<ceven<<endl;
}