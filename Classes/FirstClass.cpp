#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Smartphone{
    public:

    Smartphone(string name,int mp, int battery,string proc){
        this->name=name;
        this->cameraMP=mp;
        this->batterySize=battery;
        this->processor=proc;
    }

    string name;
    int cameraMP;
    int batterySize;
    string processor;
    
};


class Engine{
    public:
    string name;
    int ltr;
    int cycl;
    string startsound;

    Engine(string name,int litre,int cyclindir,string soundstart){
        this->name=name;
        this->ltr=litre;
        this->cycl=cyclindir;
        this->startsound=soundstart;
    }

    void start(){
        cout<<"Starting Engine: "<<this->name<<endl;
        cout<<this->startsound<<" "<<this->startsound<<endl;
    }
    
};


int main(){
    
    Smartphone phone1("Samsung",100,5000,"Sinepdragon");
   
    // cout<<phone1.name<<endl;
    // cout<<phone1.processor<<endl;

    Engine mer_eng("Mercedes",4,8,"huuuuuuuuu");
    Engine toyota_eng("Supra",6,12,"ratatata");
    toyota_eng.start();
    mer_eng.start();
    

}