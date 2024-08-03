#include<iostream>
#define PI 3.1415 
using namespace std;
class Circle{
int radius;
public:
void Area(float radius){
this->radius=radius;
cout<<"Area Of Circle Is: "<<PI*radius*radius;
}
void Circumference(float radius){
this->radius=radius;
cout<<endl<<"Circumference Of Circle Is: "<<2*PI*radius;
}
};
int main(){
Circle C;
float rad;
cout<<"Enter Radius Of Circle:";
cin>>rad;
C.Area(rad);
C.Circumference(rad);
return 0;
}
