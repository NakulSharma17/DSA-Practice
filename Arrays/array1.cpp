#include<bits/stdc++.h>
using namespace std;
int main(){
    int mark1[]={67,70,88,65,90};
    int mark2[5];
    cout<< "Enter your marks: "<<endl;
    for(int i = 0;i<5;i++){
        cin>>mark2[i];
    }
    cout<<"ur given marks"<<endl;
     for(int i = 0;i<5;i++){
        cout<<mark2[i]<<endl;
    }
    cout<<"Now the diffrence is: "<<endl;
    for(int i=0;i<5;i++){
        int diff;
        diff=mark2[i]-mark1[i];
        cout<<diff<<endl;
    }
   
    
    
}
