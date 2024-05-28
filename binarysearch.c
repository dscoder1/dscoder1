#include<stdio.h>
int main(){
    int mid,range,low=0,high,a[100],search;
    printf("\nenter number of range");
    scanf("%d",&range);
    high=range-1;
    printf("\ninsert %d elements: ",range);
    for(int i=0;i<range;i++){
        scanf("%d",&a[i]);
    }
    printf("\nelements are:");
    for(int i=0;i<range;i++){
        printf("\n%d",a[i]);
    }
    printf("\nenter element you want to search:");
    scanf("%d",&search);
    while(low<=high){
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
    if(low>high){
        printf("\nelement not found");
    }
}