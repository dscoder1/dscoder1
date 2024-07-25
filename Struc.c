#include<stdio.h>
#include<string.h>
int main(){
struct Cricketers{
int Jersey_no;
char First_Name[20];
char Last_Name[20];
int No_Of_Matches;
int Run;
float Avg;
char D_O_B[20];
};
int choice;
printf("\nEnter Number Of Cricketers You Want To Fill Data");
scanf("%d",&choice);
struct Cricketers players[choice];
printf("\nTaking All Input From KeyBoard:");
for(int i=0;i<choice;i++){
printf("\nFILL INFORMATION OF %d PLAYERS",i+1);
printf("\nEnter Jersey No:");
scanf("%d",&players[i].Jersey_no);
printf("\nEnter First Name");
scanf("%s",players[i].First_Name);
printf("\nEnter Last Name");
scanf("%s",players[i].Last_Name);
printf("\nEnter Number Of Matches");
scanf("%d",&players[i].No_Of_Matches);
printf("\nenter Run:");
scanf("%d",&players[i].Run);
printf("\nEnter Average :");
scanf("%f",&players[i].Avg);
printf("\nEnter Date Of Birth:");
scanf("%s",players[i].D_O_B);
}
printf("\nDISPLAY INFORMATION............\n\n");
for(int i=0;i<choice;i++){
printf("\n\nInformation Of %d player\n\n",i+1);
printf("\nJersey Number : %d",players[i].Jersey_no);
printf("\nName Of Player :%s %s",players[i].First_Name,players[i].Last_Name);
printf("\nNumber Of Matches : %d",players[i].No_Of_Matches);
printf("\nRun : %d",players[i].Run);
printf("\nAverage Is : %f",players[i].Avg);
printf("\nDate Of Birth: %s",players[i].D_O_B);
}
return 0;
}
