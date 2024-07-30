#include<iostream>
using namespace std;
//MULTIPLE INHERITANCE
//1st Class
class Car{
public:
//INSTANCE MEMBER VARIABLE
int Id;
//INSTANCE MEMBER METHOD
void setBrake(){
printf("Brake Setted\n");
}
void setMileage(){
printf("Mileage Setted\n");
}
};


//2nd Class
class TataMotors{
public:
char Brand[20]="Tata";
};

//3rd Class
class NewF{
public:
void Double(){
printf("Double Gear\n");
}
};

//Inherit All Three Class
class TataSafari:public Car,public TataMotors,public NewF{  
// Attach Public KeyWord To Both Class For Accessing Their Features 
public:
char name[20];
void Run(){
printf("Ready To Run\n");
}
int Mileage;
};

//Main Function
int main(){
TataSafari T1;   //OBJECT OF TATASAFARI CLASS
T1.setBrake();
T1.setMileage();
T1.Run();
T1.Double();
cout<<"Enter Id And Mileage And Name Of Car:";
cin>>T1.Id>>T1.Mileage>>T1.name;
cout<<T1.Id<<endl<<T1.Mileage<<endl;
cout<<T1.Brand<<endl<<T1.name;
return 0;
}
