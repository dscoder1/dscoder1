#include<iostream>
#include<string>
//MULTI LEVEL INHERITANCE
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

class TataMotors:public Car{
public:
char Brand[20]="Tata";
};

class TataSafari:public TataMotors{
public:
char name[20]="Tata Safari";
void Run(){
printf("Ready To Run\n");
}
int Mileage;
};


int main(){
TataSafari T1;   //OBJECT OF TATASAFARI CLASS
T1.setBrake();
T1.setMileage();
T1.Run();
cout<<"Enter Id And Mileage :";
cin>>T1.Id>>T1.Mileage;
cout<<T1.Id<<endl<<T1.Mileage<<endl;
cout<<T1.Brand<<endl<<T1.name;
return 0;
}
