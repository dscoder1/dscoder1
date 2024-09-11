#include<iostream>
#include<fstream>
#include<string>
using namespace std;
fstream file;
string Question;
string Option[4];
string AnsIndex;
static int Correct=0;
void Add(){
file.open("Question",ios::app|ios::out);
cout<<"\nEnter Question";
cin.ignore();
getline(cin,Question);
for(int i=0;i<4;i++){
cout<<"\nEnter Option "<<i+1<<endl;
getline(cin,Option[i]);
}
cout<<"Enter Answer Of This Question(1/2/3/4)"<<endl;
cin>>AnsIndex;
file<<Question<<"*"<<Option[0]<<"*"<<Option[1]<<"*"<<Option[2]<<"*"<<Option[3]<<"*"<<AnsIndex<<endl;
file.close();
}
void Answer(){
string YourAnsIndex;
file.open("Question",ios::in);
getline(file,Question,'*');
getline(file,Option[0],'*');
getline(file,Option[1],'*');
getline(file,Option[2],'*');
getline(file,Option[3],'*');
getline(file,AnsIndex,'\n');
while(!file.eof()){
cout<<"Question: "<<endl;
cout<<Question<<endl<<endl;
cout<<"Options Are: "<<endl<<endl;
for(int i=0;i<4;i++){
cout<<Option[i]<<endl<<endl;
}
cout<<"\n\nGive Your Answer From Above Option(1/2/3/4)"<<endl;
cin>>YourAnsIndex;
if(AnsIndex==YourAnsIndex){
Correct++;
}
getline(file,Question,'*');
getline(file,Option[0],'*');
getline(file,Option[1],'*');
getline(file,Option[2],'*');
getline(file,Option[3],'*');
getline(file,AnsIndex,'\n');
}
file.close();
cout<<"Total Correct Answer: "<<Correct<<endl;
cout<<"Thank You Bye Bye Guys"<<endl;
exit(0);
}
void Display(){
file.open("Question",ios::in);
getline(file,Question,'*');
getline(file,Option[0],'*');
getline(file,Option[1],'*');
getline(file,Option[2],'*');
getline(file,Option[3],'*');
getline(file,AnsIndex,'\n');
while(!file.eof()){
cout<<"Question: "<<endl;
cout<<Question<<endl;
cout<<"Options Are: "<<endl;
for(int i=0;i<4;i++){
cout<<Option[i]<<endl<<endl;
}
cout<<endl;
getline(file,Question,'*');
getline(file,Option[0],'*');
getline(file,Option[1],'*');
getline(file,Option[2],'*');
getline(file,Option[3],'*');
getline(file,AnsIndex,'\n');
}
file.close();
}
int main(){
int Choice;
cout<<"Question Related Application"<<endl;
cout<<"****************************"<<endl;
cout<<"\n1.Add\n2.Display\n3.Exit\n"<<endl;
do{
cout<<"\nEnter Your Choice:"<<endl;
cin>>Choice;
switch(Choice){
case 1:Add();
break;
case 2:Display();
break;
case 3:Answer();
break;
case 4:exit(0);
break;
default:cout<<"\nInvalid Choice"<<endl;
}
}while(Choice!=4);
return 0;
}
