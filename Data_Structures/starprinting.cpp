#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main(){

    //innput : 4
    //output
    /*
    *
    **
    ***
    ****
    
    */
    int size;
    cin>>size;
    for(int i=size;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
            Sleep(5);
        }
        cout<<endl;
    }

    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
            Sleep(5);
        }
        cout<<endl;
    }

    return 0;
}