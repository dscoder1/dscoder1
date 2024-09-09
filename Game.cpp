#include<iostream>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
int Uwin=0,Cwin=0,Choice,random,Chance,Mistake=0,Draw=0;
cout<<"Welcome To Rock,Paper,Scissors Game"<<endl;
cout<<"***********************************"<<endl<<endl;
cout<<"Enter How Many Round You Want To Play This Game(3/5/10):"<<endl;
cin>>Chance;
while(Chance){
cout<<endl<<"Give Correct Input Wrong Input Decrease Your Total Chances"<<endl;
cout<<"\n1.Rock\n2.Paper\n3.Scissors\n";
cout<<"\nEnter Your Choice(1/2/3):"<<endl;
cin>>Choice; 
if(Choice >=1 && Choice <=3){
random=(rand()%3+1);
if((Choice==1 && random==3) || (Choice==2 && random==1) || (Choice==3 && random==2)){
cout<<"You Win This Time"<<endl;
cout<<"Your Choice Is: "<<Choice<<endl;
cout<<"Random Number Is :"<<random<<endl;
Uwin++;
}
else if((random==1 && Choice==3) || (random==2 && Choice==1) || (random==3 && Choice==2)){
cout<<"Computer Win This Time"<<endl;
cout<<"Your Choice Is: "<<Choice<<endl;
cout<<"Random Number Is :"<<random<<endl;
Cwin++;
}
else{
cout<<"Noone Win This Time Means DRAW !"<<endl;
cout<<"Your Choice Is: "<<Choice<<endl;
cout<<"Random Number Is :"<<random<<endl;
Draw++;
}
}
else{
cout<<"Oooo User ! I Think You Lol ! Give 1 OR 2 OR 3 As Input Please !"<<endl;
cout<<"Just For Fun"<<endl; 
cout<<"Due To This LolPanti You Lose One Chance Bro! Smile Please !"<<endl<<endl;
Mistake++;
cout<<"You Lose Your "<<Mistake<<" Chance So Play Safely:"<<endl<<endl;
}
Chance--;
}
cout<<"**************"<<endl;
cout<<"Result Of Game"<<endl<<endl;
cout<<"Total Round: "<<(Uwin+Cwin+Mistake+Draw)<<endl;
cout<<"Computer Win: "<<Cwin<<endl;
cout<<"You Win : "<<Uwin<<endl;
cout<<"Game Draw: "<<Draw<<endl; 
cout<<"Mistake Done: "<<Mistake<<endl<<endl;
if(Cwin>Uwin)
cout<<"Sorry User ! Computer Win Bro This Game"<<endl;
else if(Uwin>Cwin)
cout<<"Yes ! You Win This Game Congratulations"<<endl;
else
cout<<"Try Next Time ! Game Draw"<<endl;
cout<<"You Have Done "<<Mistake<<" Mistake In This Game"<<endl<<endl;
cout<<"*************************************************"<<endl;
cout<<"Special Message For User"<<endl<<endl;
cout<<"THANK YOU SO MUCH USER"<<endl<<endl;
cout<<"*************************************************"<<endl;
return 0;
}
