#include<iostream>
#include<string>
#include<fstream>
using namespace std;
void Add(){
string str;
cout<<"Enter Work";
cin.ignore();
getline(cin,str);
fstream file;
file.open("List",ios::out|ios::app);
file<<str<<endl;
file.close();
}
void Delete(){
string str,sstr;
cout<<"Enter Work You Want To Delete:";
cin.ignore();
getline(cin,sstr);
fstream file;
fstream file1;
file1.open("List1",ios::out|ios::app);
file.open("List",ios::in);
getline(file,str,'\n');
while(!file.eof()){
if(str==sstr){
goto label;
}
file1<<str<<endl;
label:
getline(file,str,'\n');
}
file1.close();
file.close();
remove("List");
rename("List1","List");
}
void Display(){
string str;
fstream file;
file.open("List",ios::in);
getline(file,str,'\n');
while(!file.eof()){
cout<<str<<endl;
getline(file,str,'\n');
}
}
int main(){
cout<<"1.Add Work\n2.Delete Work\n3.Display\n4.Exit\n";
int choice;
do{
cout<<"Enter Your Choice: ";
cin>>choice;
switch(choice){
case 1:Add();
break;
case 2:Delete();
break;
case 3:Display();
break;
case 4:exit(0);
break;
default:cout<<"Invalid Choice"<<endl;
}
}while(choice!=4);
return 0;
}
