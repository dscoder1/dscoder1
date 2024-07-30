#include<iostream>
using namespace std;
class Increment{
public:
int x,y;
Increment(int x,int y){
this->x=x;
this->y=y;
}
//1st Method

//POST INCREMENT -->> FIRST USE AND THEN INCREMENT
Increment PostIncre(){
Increment I2;
I2.x=x++;
I2.y=y++;
return I2;
}

//PRE INCREMENT  -->> FIRST INCREMENT AND THEN USE
Increment PreIncre(){
Increment I2;
I2.x=++x;
I2.y=++y;
return I2;
}

//2nd Method

//POST INCREMENT -->> FIRST USE AND THEN INCREMENT
Increment operator++(int){
//IN ARGUMENT int IS MUST GIVEN TO MAKE DIFFRENCE BETWEEN PRE AND POST INCREMENT
Increment I2;
I2.x=x++;
I2.y=y++;
return I2;
}

//PRE INCREMENT  -->> FIRST INCREMENT AND THEN USE
Increment operator++(){
Increment I2;
I2.x=++x;
I2.y=++y;
return I2;
}

Increment(){}
void Display(){
cout<<this->x<<" "<<this->y<<endl;
}
};
int main(){
int val1,val2;
cout<<"Enter Two Values:";
cin>>val1>>val2;
Increment I3(val1,val2),I4;
//For Function PostIncre And PreIncre
I4=I3.PostIncre();
I4.Display();
I4=I3.PreIncre();
I4.Display();

//For PostIncrement
I4=I3++;
I4.Display();


//For PreIncrement
I4=++I3;
I4.Display();
return 0;
}

