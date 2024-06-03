#include<iostream>
using namespace std;
class animal{
    string name;
    int run;
    public:
    void sound(){
        cout<<"Producing Sound";
    }
    void setData(string n,int spd){
        name=n;
        run=spd;
    }
    void displayData(){
        cout<<name<<endl;
        cout<<run<<endl;
    }
    animal(){   
        cout<<"Animal Constructor Called"<<endl;
    }
    ~animal(){
        cout<<"Animal Destructor Called"<<endl;
    }
};

class dog:public animal{  //Inheritance :single
    public:
    void sound(){
        cout<<"Barking";
    }
    dog(){    // dog():animal() Calling Sequence --->child to parent ,Execution Sequence ---->parent to child
        cout<<"Dog Constructor Called"<<endl;
    }
    ~dog(){
        cout<<"Dog Destructor Called"<<endl;
        //~animal();  Calling Sequence --->child to parent ,Execution Sequence ---->child to parent 
    }
};

int main(){
   //  <<<<<<<<Method Of Calling a Overriding Function From Parent Class
    animal *a1;
    dog d1;
    a1=&d1;
    a1->sound();
    


    //  <<<<<<<<<<<From below Code Child Overriding method Is called
    d1.sound();
    cout<<endl;
    d1.setData("Dog",10);
    d1.displayData();

    return 0;   
}