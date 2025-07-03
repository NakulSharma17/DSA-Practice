//Make a struct called SmartPhone, 
// ask user number of smartphones they want to save
// for eveery smartphone, ask 
            // - company name
            // - Model name
            // - Camera in MP
            //- battery in mAh

// after user has entered all, show all the smartphones data
// approach- ask how many phones then print
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arrsi;
    cout<<"Enter the quantity of phone"<<endl;
    cin>>arrsi;
    string comparr[arrsi];
    int camarr[arrsi];
    cout<<"Enter company name and cam spec"<<endl;
    for(int i = 0;i<arrsi;i++){
        cin>>comparr[i];
        cin>>camarr[i];
    }
    // for(int i = 0;i<arrsi;i++){
    //     cout<<"U entered phone company : "<<comparr[i]<<endl;
    //     cout<<"U entered spec: "<<camarr[i]<<endl;
    //     cout<<"--------------------"<<endl;        
    // }
    // for(int i = 0;i<arrsi;i++){
    //     if(camarr[i]>=20){
    //     cout<<"U entered phone company : "<<comparr[i]<<endl;
    //     cout<<"U entered spec: "<<camarr[i]<<endl;
    //     cout<<"--------------------"<<endl;
    //     }
    // }
    int maximum = 0;
    for(int i =0;i<arrsi;i++){
        if(camarr[i]>maximum){
            maximum=camarr[i];
        }
    }
    cout<<"This is the maximum number: "<<maximum<<endl;
}