/*
LEVEL MEDIUM

Problem Statement:
Write a program that takes a 2D array (matrix) of integers and prints the sum of elements for each row separately.
Use a function to compute and display each row's sum.

1 2 3
4 5 6
7 8 9

row 1 = 6 (1+2+3)
row 2 = 15 ( 4+5+6)


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rnum;
    int cnum;
    cout<<"Enter Row size: ";
    cin>>rnum;
    cout<<"Enter col size: ";
    cin>>cnum;
    int arr[rnum][cnum];
    cout<<"Enter the value of array: "<<endl;
    for(int i =0;i<rnum;i++){
        for(int j=0;j<cnum;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your array is: "<<endl;
    for(int i =0;i<rnum;i++){
        for(int j=0;j<cnum;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----Your Addition of row is: "<<endl;
    for(int i =0;i<rnum;i++){
        int addi=0;
        for(int j=0;j<cnum;j++){
            addi+=arr[i][j];
        }
        cout<<"Your addition of Row "<<i+1<<" is: "<<addi<<" ";
        cout<<endl;
    }
    
}