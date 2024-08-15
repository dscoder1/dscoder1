#include<iostream>
#include<string>
using namespace std;
//template<typename P,typename Q>
void Add(){
int num1,num3,num2;
cout<<"Enter 2 Number:"<<endl;
cin>>num1;
cin>>num2;
num3=num1+num2;
cout<<"Your Result Is: "<<num3;
cout<<endl;
}
void Sub(){
int num1,num3,num2;
cout<<"Enter 2 Number:"<<endl;
cin>>num1;
cin>>num2;
num3=num1-num2;
cout<<"Your Result Is: "<<num3;
cout<<endl;
}

void Mul(){
int num1,num3,num2;
cout<<"Enter 2 Number:"<<endl;
cin>>num1;
cin>>num2;
num3=num1*num2;
cout<<"Your Result Is: "<<num3;
cout<<endl;
}

void Div(){
int num1,num3,num2;
cout<<"Enter 2 Number:"<<endl;
cin>>num1;
cin>>num2;
num3=num1/num2;
cout<<"Your Result Is: "<<num3;
cout<<endl;
}

void Per(){
int num1;
float num3,num2;
cout<<"Enter Total:"<<endl;
cin>>num1;
cout<<"Enter Obtained: "<<endl;
cin>>num2;
num3=(num2/num1)*100;
cout<<"Your Result Is: "<<num3<<endl;
cout<<endl;
}
void CtoF(){
float Cel,Far;
cout<<"Enter Celsius Value: ";
cin>>Cel;
Far=(Cel*1.8)+32;
cout<<"The Farenheit Value Of "<<Cel<<" Is "<<Far<<endl;
}
void FtoC(){
float Cel,Far;
cout<<"Enter Farenheit Value: ";
cin>>Far;
Cel=(Far-32)/1.8;
cout<<"The Celsius Value Of "<<Far<<" Is "<<Cel<<endl;
}
void BtoD(){
int bin,base=1,dec=0,rem=0,num;
cout<<"Enter Binary Number: ";
cin>>bin;
num=bin;
while(bin!=0){
rem=bin%10;
dec=dec+(rem*base);
bin=bin/10;
base=base*2;
}
cout<<"The Decimal Representation Of "<<num<<" Is "<<dec<<endl;
}
void DtoB(){
int dec,bin=0,rem=0,base=1,num;
cout<<"Enter Decimal Number: ";
cin>>dec;
num=dec;
while(dec!=0){
rem=dec%2;
bin=bin+(rem*base);
dec=dec/2;
base=base*10;
}
cout<<"The Binary Representation Of "<<num<<" Is "<<bin<<endl;
}
int main(){
int choice;
cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Percentage\n6.Celsius To Farenheit\n7.Farenheit To Celsius\n8.Binary To Decimal\n9.Decimal To Binary\n10.Exit\n"<<endl;
do{
cout<<"Enter Choice: ";
cin>>choice;
switch(choice){
case 1:Add();
break;
case 2:Sub();
break;
case 3:Mul();
break;
case 4:Div();
break;
case 5:Per();
break;
case 6:CtoF();
break;
case 7:FtoC();
break;
case 8:BtoD();
break;
case 9:DtoB();
break;
case 10:exit(0);
break;
default:cout<<"Invalid Choice:"<<endl;
}
}while(choice!=10);
return 0;
}
