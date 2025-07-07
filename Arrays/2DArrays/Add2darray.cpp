#include<bits/stdc++.h>
using namespace std;;
int main(){
    int rownum,colnum;
    cout<<"Enter the size of both arrray: "<<endl;
    cout<<"For Row: ";
    cin>>rownum;
    cout<<"For column: ";
    cin>>colnum;
    int arr1[rownum][colnum];
    int arr2[rownum][colnum];
    cout<<"Enter the values for Array 1: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Your array1: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the values for Array 2: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Your array2: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    int arr3[rownum][colnum];
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"Your Addition wali array is: "<<endl;
    for(int i =0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    
}