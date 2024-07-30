#include<iostream>
#include<string>
using namespace std;
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

//SINGLE INHERITANCE

class TataMotors:public Car{
public:
void Run(){
printf("Ready To Run\n");
}
int Mileage;
char Brand[20]="Tata";
char name[20]="Tata Punch";
};

int main(){
Car c1; //OBJECT Of Parent Not Able To Access Members Of TataMotors
TataMotors T1;   //OBJECT Of Child Able To Access Member Of Car
T1.setBrake();
T1.setMileage();
T1.Run();
cout<<"Enter Id And Mileage :";
cin>>T1.Id>>T1.Mileage;
cout<<T1.Id<<endl<<T1.Mileage<<endl;
cout<<T1.Brand<<endl;
return 0;
}
