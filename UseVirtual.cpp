/*
Question-->IMPLEMENT A CLASS SHAPE AND THIS CLASS HAVE VIRTUAL FUNCTIONS AREA AND PERIMETER AND FROM THIS CLASS DERIVE SOME NEW CLASS LIKE CIRCLE,RECTANGLE AND TRAINGLE AND THEN FIND THEIR AREA AND PERIMETER FROM PARENT VIRTUAL FUNCTION THROUGH OVERRIDE

*/
#include<iostream>
using namespace std;
class Shape{
public:
/*CONCEPT OF ABSTRACTION CLASS-----WE CANNOT MAKE OBJECT OF Shape CLASS DUE TO VIRTUAL FUNCTION
WE MUST HAVE TO OVERRIDE THESE VIRTUAL FUNCTION IN DERIVED CLASS TO MAKE OBJECT OF DERIVED CLASS
*/
void virtual Area(){};
void virtual Perimeter(){};
};


class Circle:public Shape{
int radius;
public:
void Area(int radius){
this->radius=radius;
cout<<"AREA OF CIRCLE: "<<(3.1415*radius*radius)<<endl;
}
void Perimeter(int radius){
this->radius=radius;
cout<<"CIRCUMFERENCE OF CIRCLE: "<<(2*3.1415*radius)<<endl;
}
};


class Rectangle:public Shape{
int length,breadth;
public:
void Area(int l,int b){
length=l,breadth=b;
cout<<"Area Of Rectangle Is: "<<l*b<<endl;
}
void Perimeter(int l,int b){
length=l,breadth=b;
cout<<"Perimeter Of Rectangle Is: "<<(2*(l+b))<<endl;
}
};


class Traingle:public Shape{
int side1,side2,side3,base,height;
public:
void Perimeter(int s1,int s2,int s3){
side1=s1;
side2=s2;
side3=s3;
cout<<"Perimeter Of Traingle Is: "<<(side1+side2+side3)<<endl;
}
void Area(int b,int h){
base =b;
height=h;
cout<<"Area Of Traingle Is: "<<((b*h)/2)<<endl;
}
};


int main(){
//OBJECT CREATION
Circle C1;
Rectangle R1;
Traingle T1;


int radius,length,breadth,side1,side2,side3,base,height;
cout<<endl<<"Enter Radius Of Circle: ";
cin>>radius;
C1.Area(radius);
C1.Perimeter(radius);


cout<<endl<<"Enter Length And Breadth Of Rectangle: ";
cin>>length>>breadth; 
R1.Area(length,breadth);
R1.Perimeter(length,breadth);


cout<<endl<<"Enter Three Sides Of Traingle: ";
cin>>side1>>side2>>side3;
T1.Perimeter(side1,side2,side3);
cout<<endl<<"Enter Base And Height Of Traingle:";
cin>>base>>height;
T1.Area(base,height);


return 0;
}

