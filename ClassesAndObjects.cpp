#include<iostream>
using namespace std;
class car{
    public:
    string carName; //Instance Member Variable
    int speed;
    string color;
    void setBrake(){   // Instance Member Function
        cout<<"Brake Setted Successfully"<<endl;
    }
    void start(){
        cout<<"Car Started Successfully"<<endl;
    }
    
    friend void fun1();//  Friend Function
    friend void fun2();
    friend void strt();
    

    //Constructor   >>>>>>>  Code Of The First work which is done in life of object written in Constructor. like..Initialising Instance Member Variable
    
    car(string Name,int spd,string clr){   //Constructor  >>>>>>>> called when we create object 
        cout<<"Constructor Called with three arguments:"<<endl;
        carName=Name;
        speed=spd;
        color=clr;
    }
    car(){    //constructor
        cout<<"Constructor Called without any arguments:"<<endl;
    }
    car(int spd){   //Constructor
        cout<<"constructor Called With Single Arguments:"<<endl;;
        speed=spd;
    }

    ~car(){  //Destructor   >>>>>>>> Code Of The last work which is done in life of object written in Destructor. like..delete object
        cout<<"Destructor Called :"<<endl;
    }
    void displayData(){   //Display data
        cout<<"Details Of Car:"<<endl;
        cout<<carName<<endl;
        cout<<speed<<endl;
        cout<<color<<endl;
    }
    
    void setData(string Name,int spd,string clr){  //Initialsing  variable with value
        carName=Name;
        speed=spd;
        color=clr;
    }
    void displayData(){    //Display Data
        cout<<"Details Of Car:"<<endl;
        cout<<carName<<endl;
        cout<<speed<<endl;
        cout<<color<<endl;
    }
    
};


void fun1();
void fun2();
void strt();
void fun1(string Name,int spd,string clr){
    car c1;
    c1.carName=Name;
    c1.speed=spd;
    c1.color=clr;
    cout<<c1.carName<<endl;
    cout<<c1.color<<endl;
    cout<<c1.speed<<endl;
}
void fun2(){

}
void strt(){
    cout<<"Car Started Successfully"<<endl;
}



//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<MAIN FUNCTION>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
  
  
  
    int main(){

        //Calling Friend Function
    fun1("Suzuki",60,"Grey");
    fun2();
    strt();

    //Calling Constructor 
    car c1("Skoda",120,"white");
    c1.displayData();
    car c3;
    car c2(60);
    c2.displayData();
    c1.setBrake();

    //Setting Value Using Normal Function Inside Class Car
    c1.setData("Fortuner",90,"Black");
    c1.displayData();
    
   
  return 0;
}