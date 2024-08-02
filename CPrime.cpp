//WAP TO FIND A NUMBER IS PRIME OR NOT USING CONSTRUCTOR
#include<iostream>
using namespace std;
class ChckPrime{
int num,flag=0;
public:
ChckPrime(){
cout<<"Enter A Number You Want To Check:";
cin>>num;
for(int i=2;i<=num/2;i++){
if(num%i==0){
flag=1;
break;
}
}
if(num==1){
cout<<"1 Is Neither Prime Nor Composite"<<endl;
}
else if(flag==0){
cout<<num<<" Is Prime"<<endl;
}
else{
cout<<num<<" Is Composite"<<endl;
}
}
};
int main(){
while(1)
ChckPrime New;
return 0;
}
