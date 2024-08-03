/*
BANK RELATED TRANSACTIONS
*/
#include<iostream>
using namespace std;
class BankInfo{
int AcctNo;
float BnkB;
public:
BankInfo(int AcctNo,float BnkB){
this->AcctNo=AcctNo;
this->BnkB=BnkB;
}
void Withdraw(int amt){
if(amt<0){
cout<<"Withdraw Amount Cannot Be Negative";
cout<<endl<<"Remaining Bank Balance Is :"<<this->BnkB;
return;
}
if(this->BnkB<amt){
cout<<endl<<"INSUFFICIENT BALANCE";
cout<<endl<<"Remaining Bank Balance Is :"<<this->BnkB;
}
else {
cout<<"Withdrawn Successfull";
this->BnkB=this->BnkB-amt;
cout<<endl<<"Remaining Bank Balance Is :"<<this->BnkB;
}
}
};
int main(){
int AcctNo;
float BnkB;
char want;
cout<<"Enter Account Number:";
cin>>AcctNo;
cout<<"Enter Bank Balance:";
cin>>BnkB;
BankInfo B(AcctNo,BnkB);
do{
cout<<endl<<"Enter Amount You Want To Withdraw:";
float amt;
cin>>amt;
B.Withdraw(amt);
cout<<endl<<"Want To Withdraw Again(Y or y For YES): ";
cin>>want;
}while(BnkB>0 && (want=='Y' || want=='y'));
return 0;
}
