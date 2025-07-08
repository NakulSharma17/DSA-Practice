/*
LEVEL EAZYYY

Problem Statement:
Given a 2D array of integers, write a program to find and print the maximum element present in the array.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rownum;
    int colnum;
    cout<<"Enter the Number of rows: ";
    cin>>rownum;
    cout<<"Enter the number of columns: ";
    cin>>colnum;
    int arr1[rownum][colnum],arr2[rownum][colnum];
    cout<<"Enter Values for array 1: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Your array 1 is: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cout<<arr1[i][j]<<" ";
        }
    cout<<endl;
    }
    int max=0;
    for(int i=0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            if(arr1[i][j]>max){
                max=arr1[i][j];
            }
        }
    }
    cout<<"Your Maximum Value is: "<<max<<endl;
    int min=arr1[0][0];
    for(int i=0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            if(arr1[i][j]<min){
                min=arr1[i][j];
            }
        }
    }
    cout<<"Your Minimum Value is: "<<min<<endl;

}