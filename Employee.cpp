#include<iostream>
#include<fstream>
#include<string>
using namespace std;
fstream file,file1;
string Id,Name,Phone,Job,Gender,Salary;
void Add();
void Update();
void Delete();
void See();
void Admin();
void Empl();
void FindId();
int main(){
int Choice;
cout<<"\nEMPLOYEE MANAGMENT SYSTEM"<<endl;
cout<<"\n1.Administrator\n2.Employee\n3.Exit\n"<<endl;
do{
cout<<"\nEnter Your Choice:";
cin>>Choice;
switch(Choice){
case 1:Admin();
break;
case 2:Empl();
break;
case 3:exit(0);
break;
default:cout<<"Invalid Option"<<endl;
}
}while(Choice!=3);
return 0;
}
void Add(){
cout<<"Give Valid Details Of Employee:"<<endl<<endl;
cout<<"Enter Id:"<<endl;
cin.ignore();
getline(cin,Id);
cout<<"Enter Name:"<<endl;
getline(cin,Name);
cout<<"Enter Phone:"<<endl;
getline(cin,Phone);
cout<<"Enter Job Profile";
getline(cin,Job);
cout<<"Enter Gender:"<<endl;
getline(cin,Gender);
cout<<"Enter Salary:"<<endl;
getline(cin,Salary);
file.open("Emp",ios::app|ios::out);
file<<Id<<":"<<Name<<":"<<Phone<<":"<<Job<<":"<<Gender<<":"<<Salary<<endl;
cout<<endl<<"Employee Added Successfully"<<endl<<endl;
file.close();
}
void Delete(){
string Id1;
cout<<"Enter Id Of Employee:"<<endl;
getline(cin,Id1);
file.open("Emp",ios::in);
file1.open("Emp1",ios::app|ios::out);
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
while(!file.eof()){ 
if(Id==Id1){
}
else{
file1<<Id<<":"<<Name<<":"<<Phone<<":"<<Job<<":"<<Gender<<":"<<Salary<<endl;
}
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
}
cout<<"Employee Details Deleted Successfully"<<endl;
file.close();
file1.close();
remove("Emp");
rename("Emp1","Emp");
}
void See(){
cout<<"Details Of All Employee"<<endl;
file.open("Emp",ios::in);
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
while(!file.eof()){
cout<<"Employee Id: "<<Id<<endl;
cout<<"Employee Name: "<<Name<<endl;
cout<<"Employee Phone: "<<Phone<<endl;
cout<<"Employee Job Profile: "<<Job<<endl;
cout<<"Employee Gender: "<<Gender<<endl;
cout<<"Employee Salary: "<<Salary<<endl<<endl;
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
}
file.close();
}
void Update(){
string Id1,newId,newName,newPhone,newJob,newSalary,newGender;
cout<<"Enter Id Of Employee:"<<endl;
getline(cin,Id1);
file.open("Emp",ios::in);
file1.open("Emp1",ios::app|ios::out);
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
while(!file.eof()){ 
if(Id==Id1){
cout<<"Give New Details Of Employee:"<<endl<<endl;
cout<<"Enter New Id:"<<endl;
cin.ignore();
getline(cin,newId);
cout<<"Enter New Name:"<<endl;
getline(cin,newName);
cout<<"Enter New Phone:"<<endl;
getline(cin,newPhone);
cout<<"Enter New Job Profile";
getline(cin,newJob);
cout<<"Enter New Gender:"<<endl;
getline(cin,newGender);
cout<<"Enter New Salary:"<<endl;
getline(cin,newSalary);
file1<<newId<<":"<<newName<<":"<<newPhone<<":"<<newJob<<":"<<newGender<<":"<<newSalary<<endl;
cout<<endl<<"Employee Details Updated Successfully"<<endl<<endl;
}
else{
file1<<Id<<":"<<Name<<":"<<Phone<<":"<<Job<<":"<<Gender<<":"<<Salary<<endl;
}
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
}
file.close();
file1.close();
remove("Emp");
rename("Emp1","Emp");
}
void Admin(){
cout<<"WELCOME TO ADMINISTRATOR PAGE"<<endl;
string Email,Pass;
int choice;
cout<<"Give Valid Email and Password To Start:"<<endl;
cout<<"Enter Email:"<<endl;
cin>>Email;
cout<<"Enter Password:"<<endl;
cin>>Pass;
if(Email=="ds@gmail.com" and Pass=="1234"){
cout<<"Finally Login To Administrator Block"<<endl<<endl;
cout<<"1.Add New Employee\n2.Update Employee Details\n3.Delete Employee Details\n4.See Details Of All Employee\n5.Exit From Administrator Block\n"<<endl;
do{
cout<<"Enter Your Choice:"<<endl;
cin>>choice;
switch(choice){
case 1:Add();
break;
case 2:Update();
break;
case 3:Delete();
break;
case 4:See();
break;
case 5:main();
break;
default:cout<<"Invalid Input In Administrator Block"<<endl;
}
}while(choice!=5);
}
else{
cout<<"Wrong Details:"<<endl;
cout<<"Try Again:"<<endl;
Admin();
}
}
void FindId(){
string Name1,Phone1;
cout<<"Enter Your Name:"<<endl;
cin.ignore();
getline(cin,Name1);
cout<<"Enter Your Phone Number:"<<endl;
getline(cin,Phone1);
file.open("Emp",ios::in);
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
while(!file.eof()){ 
if(Name==Name1 && Phone==Phone1){
cout<<"Employee Details Found"<<endl<<endl;
cout<<"Employee All Details:"<<endl;
cout<<"Employee Id: "<<Id<<endl;
cout<<"Employee Name: "<<Name<<endl;
cout<<"Employee Phone: "<<Phone<<endl;
cout<<"Employee Job Profile: "<<Job<<endl;
cout<<"Employee Gender: "<<Gender<<endl;
cout<<"Employee Salary: "<<Salary<<endl<<endl;
return;
}
getline(file,Id,':');
getline(file,Name,':');
getline(file,Phone,':');
getline(file,Job,':');
getline(file,Gender,':');
getline(file,Salary,'\n');
}
cout<<"Employee Details Not Found"<<endl;
file.close();
}
void Empl(){
int choice;
cout<<"WELCOME TO EMPLOYEE PAGE"<<endl;
cout<<"You Can See Your Own Details"<<endl;
cout<<"1.Find Your Id By Name And Phone Number\n2.Exit From Employee Block\n"<<endl;
do{
cout<<"Enter Your Choice:"<<endl;
cin>>choice;
switch(choice){
case 1:FindId();
break;
case 2:main();
break;
default:cout<<"Invalid Choice"<<endl;
}
}while(choice!=2);
}
