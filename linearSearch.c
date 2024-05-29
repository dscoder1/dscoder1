#include<stdio.h>
int main(){
    int num,range,i,flag=0,a[50],search;
    printf("\nenter range:");
    scanf("%d",&range);
    printf("\nenter %d elements :",range);
    for(i=0;i<range;i++){
        scanf("%d",&a[i]);
    }
    printf("\narray is:");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    printf("\nenter a number you want to search");
    scanf("%d",&search);
    for(i=0;i<range;i++){
        if(a[i]==search){
            flag=1;
            printf("\nelement present at %d position",i+1);
            break;
        }
    }
    if(flag==0){
        printf("\nelement not found ");
    }
    return 0;
}
