#include<bits/stdc++.h>
using namespace std;
int main(){
    int rnum;
    int cnum;
    cout<<"Enter row numbers: "<<endl;
    cin>>rnum;
    cout<<"Enter col num: "<<endl;
    cin>>cnum;
    cout<<"Enter Values: "<<endl;
    int arr[rnum][cnum];
    for(int i =0;i<rnum;i++){
        for(int j=0;j<cnum;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your Array is: "<<endl;
    for(int i =0;i<rnum;i++){
        for(int j=0;j<cnum;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"---------------------"<<endl;
    int dia=0;
    for(int i =0;i<rnum;i++){
        for(int j=0;j<cnum;j++){
            // cout<<arr[dia][dia]<<" ";
            // dia++;
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
