// Online C compiler to run C program online
#include <stdio.h>
int add(int *a, int *b)
{   // formal parameter
    int c=*a + *b;
    *a=90; 
    *b=0;
    return c;
}
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    int a, b;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("Before calling of a function  a & b %d %d\n", a,b);
    int result= add(&a,&b);  // actual parameter
    printf("%d\n",result);
    printf("After calling of a function  a & b %d %d\n", a,b);
    return 0;
}
