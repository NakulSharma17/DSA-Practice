/*
Write a program, that takes two arrays, {1,2,3,4} and {5,6,7,8} and then makes a new array
{1,2,3,4,5,6,7,8}
*/
#include<bits/stdc++.h>
using namespace std;

void merge1(int arr1[],int arr2[],int s1,int s2){
    int newarr[s1+s2];
    int position=0;
    for(int i=0;i<s1;i++){
        newarr[position] = arr1[i];
        position++;
    }
    for(int i=0;i<s2;i++){
        newarr[position]=arr2[i];
        position++;
    }

    for(int i=0;i<s1+s2;i++){
        cout<<newarr[i]<<" ";
    }

}
int main(){
    int size1,size2;
    cout<<"Enter the size1: ";
    cin>>size1;
    cout<<"Enter the size2: ";
    cin>>size2;
    int arr1[size1],arr2[size2];
    cout<<"Enter values for array1: "<<endl;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    merge1(arr1,arr2,size1,size2);
   
   

}