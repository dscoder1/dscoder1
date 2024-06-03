#include<iostream>
using namespace std;
class Overload{
    int x,y,z;
    public:
    Overload(float p,int q,int r){
        x=p;
        y=q;
        z=r;
        cout<<"Addition Of Three Number Is:"<<x+y+z<<endl;
    }
    
    Overload(int p,int q,int r){
        x=p;
        y=q;
        z=r;
        cout<<"Addition Of Two Number Is :"<<x+y+z<<endl;
    }
    Overload(int p){
        x=p;
        cout<<"Addition Of Number Is:"<<x+10<<endl;
    }
    Overload(){
        cout<<"Not Any Number Is Present To Add"<<endl;
    }
};

//Function
void add(int p,int q){
    cout<<"Addition of two number is:"<<p+q<<endl;
}
void add(int p,int q,int r){
    cout<<"Addition Of Three Number is:"<<p+q+r<<endl;
}
void add(int p){
cout<<"Addition Of The Number Is :"<<p+20<<endl;
}
void add(){
    cout<<"No any Argument So addition is not Possible:"<<endl;
}

//  <<<<<<<<<<<<<<  Main Function  >>>>>>>>>>>>>>>>>>>>>
int main(){
    Overload v1(11,23,25);  //CONSTRUCTOR OVERLOADING
    Overload v2(12.9f,12,12);
    Overload v3(50);
    add(1,2,3);   //FUNCTION OVERLOADING
    add(1,2);
    add(1);
    add();
    return 0;
}