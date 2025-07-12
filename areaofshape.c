// Online C compiler to run C program online
#include <stdio.h>
int circle(int r)
{
    return  3.141*r*r;
}
int rectangle(int l, int b)
{
    return l*b;
}
int triangle(int l, int b)
{
    return (1/2)*l*b;
}
int main() {
   printf("1. Area of circle\n");
   printf("1. Area of Rectangle\n");
   printf("1. Area of triangle\n");
   int chf;
   printf("Enter the choice");
   scanf("%d", &chf);
   if(chf==1)
   {
       printf("Enter the radius");
       int r;
       scanf("%d", &r);
       printf("Area of circle:%d",circle(r));
   }
   else if(chf==2)
   {
       printf("Area of rectangle%d",rectangle(12,14));
   }
   else if(chf==3)
   {
       printf("%d",triangle(12,4));
   }
   else{
       printf("wrong choice");
   }

    return 0;
}
