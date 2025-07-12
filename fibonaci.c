// Online C compiler to run C program online
#include <stdio.h>
void fib(int range)
{
    long int a=0;
    long int b=1;
    printf("1. %d \n2. %d\n",a,b);
    for( int i=3; i<=range; i++)
    {
        long int c=a+b;
        a=b;
        b=c;
        printf(" %d.%d\n",i, c);
    }
}
int main() {
    // Write C code here
    int range;
    printf("Enter the range for the series:");
   scanf("%d", &range);
   fib(range);
    return 0;
}
