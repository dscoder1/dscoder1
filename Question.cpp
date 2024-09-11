#include<iostream>
#include<string>
using namespace std;
static int Correct=0;
class Questions{
string Question;
string Option[4];
int ansindex;
public:
void SetQues();
void Display();
}Ques[4];
void Questions::SetQues(){
Ques[0].Question="C++ Is A Which Type Of Progrmming Language:?\n"; 
Ques[0].Option[0]="1.Procedural Programming Language\n";
Ques[0].Option[1]="2.Object Oreinted Programming Language\n";
Ques[0].Option[2]="3.Both Type Of Programming Language\n";
Ques[0].Option[3]="4.None Of These\n";
Ques[0].ansindex=2;
 
Ques[1].Question="C Is A Which Type Of Progrmming Language:?\n" ; 
Ques[1].Option[0]="1.Procedural Programming Language\n";
Ques[1].Option[1]="2.Object Oreinted Programming Language\n";
Ques[1].Option[2]="3.Both Type Of Programming Language\n";
Ques[1].Option[3]="4.None Of These\n\n";
Ques[1].ansindex=1;
 
Ques[2].Question="Java Is A Which Type Of Progrmming Language:?\n"; 
Ques[2].Option[0]="1.Procedural Programming Language\n";
Ques[2].Option[1]="2.Object Oreinted Programming Language\n";
Ques[2].Option[2]="3.Both Type Of Programming Language \n";
Ques[2].Option[3]="4.None Of These \n\n";
Ques[2].ansindex=2;
 
Ques[3].Question="Python Is A Which Type Of Progrmming Language:?\n" ; 
Ques[3].Option[0]="1.Procedural Programming Language\n";
Ques[3].Option[1]="2.Object Oreinted Programming Language \n";
Ques[3].Option[2]="3.Both Type Of Programming Language \n";
Ques[3].Option[3]="4.None Of These \n\n";
Ques[3].ansindex=3;
}
void Questions::Display(){
int YourAnsIndex;
for(int i=0;i<=3;i++){
cout<<Ques[i].Question<<endl;
for(int j=0;j<=3;j++){
cout<<Ques[i].Option[j]<<endl;
}
cout<<"\nEnter Your Answer From Above Options"<<endl;
cin>>YourAnsIndex;
if(YourAnsIndex==Ques[i].ansindex){
Correct++;
}
}
cout<<"\nTotal Number Of Correct Answer: "<<Correct<<endl;
}
int main(){
Questions Q1;
Q1.SetQues();
Q1.Display();
return 0;
}
