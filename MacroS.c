#include<stdio.h>
#define PI 3.1415
#define Sum(a,b) (a+b)
#define Area_Circle(r) (PI*r*r)
int main(){
int r,a,b;
printf("\nEnter Radius:");
scanf("%d",&r);
printf("\n%.2f Is Area Of Circle\n",Area_Circle(r));
printf("\nEnter Number :\n");
scanf("%d %d",&a,&b);
printf("Sum Of Two Number %d and %d Is: %d",a,b,Sum(a,b));
return 0;
}
