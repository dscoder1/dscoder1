#include<iostream>
using namespace std;
int NoOfBooks;
class BookShop{
public:
string Author;
string BookName;
int Price;
string Publisher;
int Stock;
BookShop(){
cout<<"Enter Publisher Name:";
getline(cin,Publisher);

cout<<"Enter Book Name:";
getline(cin,BookName);

cout<<"Enter Author Name:";
getline(cin,Author);

cout<<"Enter Price Per Book:";
cin>>Price;

cout<<"Enter Stock:";
cin>>Stock;
}

void Purchase(){
cout<<"Enter Number Of Books You Want To Purchase:";
cin>>NoOfBooks;
if(NoOfBooks<0){
cout<<endl<<"Number Of Books Can Never Be Negative"<<endl;
}
else{
if(this->Stock<NoOfBooks){
cout<<endl<<"Insufficient Number Of Books"<<endl;;
}
else if(this->Stock>NoOfBooks){
cout<<endl<<"Books Are Available"<<endl;
cout<<endl<<"Delivering "<<NoOfBooks<<" Books :"<<endl;
cout<<"Price Of Total Books: "<<this->Price*NoOfBooks<<endl;
cout<<"Total Number Of Books Available: "<<(this->Stock-NoOfBooks)<<endl;
}
else{
cout<<endl<<"Books Are Available"<<endl;
cout<<endl<<"Delivering "<<NoOfBooks<<" Books :"<<endl;
cout<<"Price Of Total Books: "<<this->Price*NoOfBooks<<endl;
cout<<"Total Number Of Books Available: "<<(this->Stock-NoOfBooks)<<endl;
}
}
}
void Display(){
cout<<endl<<"Display Information Of Books "<<endl;
if(NoOfBooks>this->Stock){

cout<<"Name Of Publisher :"<<endl;
cout<<this->Publisher<<endl;

cout<<"Name Of Book :"<<endl;
cout<<this->BookName<<endl;

cout<<"Name Of Author :"<<endl;
cout<<this->Author<<endl;

cout<<"Price Of author :"<<endl;
cout<<this->Price<<endl;

cout<<"Remaining Number Of Stocks :"<<endl;
cout<<this->Stock<<endl;

}
else{
int rem=this->Stock-NoOfBooks;
if(rem>=0){
cout<<"Name Of Publisher :"<<endl;
cout<<this->Publisher<<endl;

cout<<"Name Of Book :"<<endl;
cout<<this->BookName<<endl;

cout<<"Name Of Author :"<<endl;
cout<<this->Author<<endl;

cout<<"Price Of Book :"<<endl;
cout<<this->Price<<endl;

cout<<"Remaining Number Of Books :"<<endl;
cout<<rem<<endl;

}
else{
cout<<endl<<"No Any Book Is Available"<<endl;
}
}
}
};
int main(){
//You Can Also Add Some New Books To These Field
BookShop Book1;
Book1.Purchase();
Book1.Display();
/*Book Book2;
Book Book3;
Book Book4;
Book Book5;
*/
return 0;
}
