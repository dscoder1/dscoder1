#include<iostream>
#include<fstream>
using namespace std;
int i=1,T_room,T_pizza,T_burger,T_drink,B_room,B_pizza,B_burger,B_drink,Total_amount=0;
void book(){
ofstream out;
out.open("HManage",ios::app);
cout<<"Enter Number Of Room You Want To Allocate:";
cin>>B_room;
if(B_room>T_room){
cout<<B_room<<" Room Is Not Available"<<endl;
cout<<"Total "<<T_room<<" Room Is Present"<<endl;
}
else{
T_room=T_room-B_room;
cout<<B_room<<" Room Is Available.......... And Alloted"<<endl;
Total_amount=Total_amount+(B_room*1200);
cout<<"Total Amount Of "<<B_room<<" Room Is "<<(B_room*1200)<<endl;
cout<<"Total "<<T_room<<" Room Is Present"<<endl;
out<<"Room: "<<B_room<<endl;
}
out.close();
cout<<endl<<endl;
}
void pizza(){
ofstream out;
out.open("HManage",ios::app);
cout<<"Enter Number Of Pizza You Want To Order:";
cin>>B_pizza;
if(B_pizza>T_pizza){
cout<<B_pizza<<" Is Not Available"<<endl;
cout<<"Total "<<T_pizza<<" Pizza Is Available"<<endl;
}
else{
T_pizza=T_pizza-B_pizza;
cout<<B_pizza<<" Pizza Is Available......... And Ordered"<<endl;
Total_amount=Total_amount+(B_pizza*200);
cout<<"Total Amount Of "<<B_pizza<<" Pizza Is "<<(B_pizza*200)<<endl;
cout<<"Total "<<T_pizza<<" Pizza Is Available"<<endl;
out<<"Pizza: "<<B_pizza<<endl;
}
out.close();
cout<<endl<<endl;
}

void burger(){
ofstream out;
out.open("HManage",ios::app);
cout<<"Enter Number Of Burger You Want To Order:";
cin>>B_burger;
if(B_burger>T_burger){
cout<<B_burger<<" Is Not Available"<<endl;
cout<<"Total "<<T_burger<<" Burger Is Available"<<endl;
}
else{
T_burger=T_burger-B_burger;
cout<<B_burger<<" Burger Is Available......... And Ordered"<<endl;
Total_amount=Total_amount+(B_burger*120);
cout<<"Total Amount Of "<<B_burger<<" Burger Is "<<(B_burger*120)<<endl;
cout<<"Total "<<T_burger<<" Burger Is Available"<<endl;
out<<"Burger: "<<B_burger<<endl;
out.close();
}
cout<<endl<<endl;
}

void drink(){
ofstream out;
out.open("HManage",ios::app);
cout<<"Enter Number Of Drink You Want To Order:";
cin>>B_drink;
if(B_drink>T_drink){
cout<<B_drink<<" Is Not Available"<<endl;
cout<<"Total "<<T_drink<<" Drink Is Available"<<endl;
}
else{
T_drink=T_drink-B_drink;
cout<<B_drink<<" Drink Is Available......... And Ordered"<<endl;
Total_amount=Total_amount+(B_drink*100);
cout<<"Total Amount Of "<<B_drink<<" Drink Is "<<(B_drink*100)<<endl;
cout<<"Total "<<T_drink<<" Drink Is Available"<<endl;
out<<"Drink: "<<B_drink<<endl;
}
out.close();
cout<<endl<<endl;
}
void Total(){
ofstream out;
out.open("Manage",ios::app);
cout<<"Total Amount: "<<Total_amount<<endl<<endl; 
out<<"Total: "<<Total_amount<<endl;
}
int main(){
int choice;
cout<<"ADD THE INFORMATION OF HOTEL"<<endl;
cout<<"Enter Total Number Of Room Present:";
cin>>T_room;
cout<<"Enter Total Number Of Pizza:";
cin>>T_pizza;
cout<<"Enter Total Number Of Burger:";
cin>>T_burger;
cout<<"Enter Total Number Of Drink:";
cin>>T_drink;
cout<<endl<<endl<<"Total Information Of Hotel:"<<endl;
cout<<"Total Room Available:"<<T_room<<endl;
cout<<"Total Pizza Available:"<<T_pizza<<endl;
cout<<"Total Burger Available:"<<T_burger<<endl;
cout<<"Total Drinks Available:"<<T_drink<<endl;
cout<<endl;
cout<<"*****************************************";
cout<<"\n1.Allot Room\n2.Order Pizza\n3.Order Burger\n4.Order Drinks\n5.Exit\n\n";
do{
cout<<"Enter Your Choice:";
cin>>choice;
switch(choice){
case 1:book();
break;
case 2:pizza();
break;
case 3:burger();
break;
case 4:drink();
break;
case 5:Total();
break;
case 6:exit(0);
break;
default:cout<<"Invalid Choice:"<<endl;
}
}while(choice!=6);
return 0;
}
