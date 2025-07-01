#include<bits/stdc++.h>
using namespace std;
int main(){
    int arrsize;
    cout<<"Enter total student"<<endl;
    cin>>arrsize;
    int mathar[arrsize];
    int phyarr[arrsize];
    int engarr[arrsize];
    // int numbers;
    cout<<"Enter Maths,Physics and English number respectively"<<endl;
    for(int i =0;i<arrsize;i++){
        cin>>mathar[i];
        cin>>phyarr[i];
        cin>>engarr[i];
    }
    for(int i = 0;i<arrsize;i++){
        cout<<"Student "<<i+1<<endl;
        cout<<mathar[i]<<endl;
        cout<<phyarr[i]<<endl;
        cout<<engarr[i]<<endl;
        cout<<"--------"<<endl;
    }}