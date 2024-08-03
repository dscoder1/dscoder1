#include<iostream>
#include<string>
using namespace std;
class Use{
public:
/*TO FIND NUMBER IS POSITIVE OR NOT
Use(int num){
if(num>=0){
cout<<"Number Is Positive";
}
else{
cout<<"Number Is Negative";
}
}*/


/*TO FIND GREATEST AMONG THREE
Use(int num,int num1,int num2){
num>num1?num>num2?cout<<num<<" Is Greatest":cout<<num2<<" Is Greatest":cout<<num1<<" Is Greatest";
}
*/


/*
//TO FIND ASCII VALUE OF PARTICULAR CHARACTER
Use(char ch){
int ASCII;
ASCII=(int)ch;
cout<<ch<<"--ITS ASCII VALUE IS:"<<ASCII;
}
*/


/*
TO CHECK CHARACTER IS VOWEL OR NOT
Use(char ch){
int ASCII=(int)ch;
if((ASCII>64 && ASCII<91) || (ASCII>96 && ASCII<123)){
if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
cout<<ch<<" Is Vowel";
}
else{
cout<<ch<<" Is Consonant";
}
} 
else{
cout<<endl<<"Not A Alphabet";
}
}
*/


/*
TO FIND LENGTH OF STRING
Use(string s){
int i=0;
while(s[i]!='\0'){
i++;
}
cout<<"Length Of "<<s<<"Is :"<<i;
}
*/

/*
TOGGLING STRING
Use(string s){
for(int i=0;s[i]!='\0';i++){
if(islower(s[i])){
s[i]=toupper(s[i]);
}
else{
if(isupper(s[i])){
s[i]=tolower(s[i]);
}
}
}
cout<<"AFTER TOGGLING STRING IS:"<<endl;
for(int i=0;s[i]!='\0';i++){
cout<<s[i];
}
}
*/
};
int main(){
/*
TO FIND NUMBER IS POSITIVE OR NOT
int num1;
cout<<"Enter Number:";
cin>>num1;
Use U1(num1);
*/


/*
TO FIND GREATEST AMONG THREE
int num,num1,num2;
cout<<"Enter 1st Number:";
cin>>num;
cout<<"Enter 2nd Number:";
cin>>num1;
cout<<"Enter 3rd Number:";
cin>>num2;
Use U1(num,num1,num2);
*/

/*
//TO FIND ASCII VALUE OF PARTICULAR CHARACTER
char ch;
cout<<"Enter Any Character:";
cin>>ch;
Use U1(ch);
*/


/*
TO CHECK CHARACTER IS VOWEL OR NOT
char ch;
cout<<"ENTER A CHARACTER:";
cin>>ch;
Use U1(ch);
*/


/*
TO FIND LENGTH OF STRING
string s;
getline(cin,s);
Use U1(s);
*/

/*
string s;
getline(cin,s);
Use U1(s);
*/
return 0;
}
