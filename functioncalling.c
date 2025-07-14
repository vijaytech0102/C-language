// Online C compiler to run C program online
#include <stdio.h>

int subtract(int a, int b)
{
    // int re=add(a,b)*add(a,b);
    return a-b;
}
int add(int a, int b)
{
   int res=subtract(a,b);
    return res;
}


int main() {
    // Write C code her
    int a;
    int b;
    printf("Enter the value of a & b");
    scanf("%d%d",&a,&b);
    int sub=subtract(a,b);
    printf("Add function call:%d", add(a,b));
    printf("result:%d",sub);
    return 0;
}
