#include<stdio.h>
int main(){
    int i,mid,range,low=0,high,a[50],search;
    printf("\nenter range");
    scanf("%d",&range);
    high=range-1;
    printf("\nenter %d elements:",range);
    for(i=0;i<range;i++){
        scanf("%d",&a[i]);
    }
    printf("\nelements of array are:");
    for(i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    printf("\nenter number you have to search");
    scanf("%d",&search);
    while(low<high){
        mid=(low+high)/2;
        if(a[mid]==search){
            printf("\nelement present at %d position",mid+1);
            break;
        }
        else if(a[mid]>search){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        return 0;
}