// Online C compiler to run C program online
// multiply three number using function--> with return type and with arguement
#include <stdio.h>
int multiply(int a, int b, int c);  // declaration with argument and return type

int multiply(int a, int b, int c ) // definition--> logic--> working of function
{
    int m=a*b;
    return m;
}

int main() {
    // Write C code here
    int a,b,c;
    printf("Enter the value of a,b,c");
    scanf("%d%d%d", &a, &b, &c);
    int result=multiply(a,b, c);
    printf("%d", result);

    return 0;
}
