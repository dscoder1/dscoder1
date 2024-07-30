#include<iostream>
using namespace std;
//HYBRID INHERITANCE --> Hierarichal And MultiLevel Inheritance Are Mentioned Below

//1st Class
class Car{
public:
//INSTANCE MEMBER VARIABLE
int Id;
//INSTANCE MEMBER METHOD
void setBrake(){
printf("\n\nBrake Setted\n");
}
void setMileage(){
printf("Mileage Setted\n");
}
};

//2nd Class

class TataMotors:public Car{
public:
char Brand[20];
char name[20];
void Run(){
printf("Ready To Run\n");
}
int Mileage;
};

//3rd Class
class Skoda:public Car{
public:
char Brand[20];
char name[20];
void Run(){
printf("Ready To Run\n");
}
int Mileage;
};

//4th Class
//Multi Level Inheritance From TataMotors
class TataSafari:public TataMotors{
public:
char Brand[20];
char name[20];
void Run(){
printf("Ready To Run\n");
}
int Mileage;
};


//Main Function
int main(){
Skoda T1;   //OBJECT OF SKODA CLASS
T1.setBrake();
T1.setMileage();
T1.Run();
cout<<"Enter Id And Mileage And Name Of Skoda Car:\n";
cin>>T1.Id>>T1.Mileage>>T1.name>>T1.Brand;
cout<<T1.Id<<endl<<T1.Mileage<<endl<<T1.Brand<<endl<<T1.name;


TataMotors T2;    //OBJECT OF TATAMOTORS CLASS
T2.setBrake();
T2.setMileage();
T2.Run();
cout<<"Enter Id And Mileage And Name Of Tata Car:\n";
cin>>T2.Id>>T2.Mileage>>T2.name>>T2.Brand;
cout<<T2.Id<<endl<<T2.Mileage<<endl<<T2.Brand<<endl<<T2.name<<endl;

TataSafari T3;    //OBJECT OF TATASAFARI CLASS
T3.setBrake();
T3.setMileage();
T3.Run();
cout<<"Enter Id And Mileage And Name Of Tata Car:\n";
cin>>T2.Id>>T2.Mileage>>T2.name>>T2.Brand;
cout<<T2.Id<<endl<<T2.Mileage<<endl<<T2.Brand<<endl<<T2.name<<endl;

return 0;
}
