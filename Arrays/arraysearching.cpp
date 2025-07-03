#include<bits/stdc++.h>
using namespace std;
void printing(int arr[],int size){
    cout<<"{";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<"}"<<endl;
}
int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];

    cout<<"Enter Values: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Your Array before deletion: "<<endl;
    printing(arr,size);


    int numbtofind;
    cin>>numbtofind;

    bool numberMIlaKyaa=false;
    for(int i=0;i<size;i++){
        if(numbtofind==arr[i]){
            numberMIlaKyaa=true;
        }
    }
    if(numberMIlaKyaa){
        cout<<"Milaaaaaaaaaaaaaaaaaa"<<endl;
    }else{
        cout<<"nhi miliya"<<endl;
    }

    }
