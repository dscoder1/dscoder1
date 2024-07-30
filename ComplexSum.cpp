#include<iostream>
using namespace std;
class Complex{
public:
int real,img;
Complex(int real,int img){
this->real=real;
this->img=img;
}
Complex(){
}
//1st Method

Complex Add(Complex c2){
Complex a;
a.real=c2.real+this->real;
a.img=c2.img+this->img;
return a;
}

//2nd Method

Complex operator +(Complex c2){
Complex a;
a.real=c2.real+this->real;
a.img=c2.img+this->img;
return a;
}

void Display(){
cout<<real<<"+"<<img<<"i"<<endl;
}
};
int main(){
Complex C1(2,8);
Complex C3(11,23);
Complex C4;
//C4=C1.Add(C3);  1st Method
//C4=C1+C3;    2nd Method
C4.Display();
return 0;
}
