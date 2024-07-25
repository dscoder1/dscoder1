#include<stdio.h>
#include<string.h>
int main(){
char str[20]="Raj Kumar";
int i=0,end=8;
while(i<=end){
char temp=str[i];
str[i]=str[end];
str[end]=temp;
i++;
end--;
}
for(int i=0;i<=8;i++){
printf("%c",str[i]);
}
return 0;
}
