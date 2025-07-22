// Online C compiler to run C program online
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    // Write C code here
    int x,y;
    printf("Enter the value of x and y:");
    scanf("%d%d", &x,&y);
    printf("Before calling x and y:%d %d:\n", x,y);
    void(*ptr_swap)(int*, int*)=&swap;
    ptr_swap(&x,&y);// pointer to a funtion and pointer within a function
    printf("After  calling x and y:%d %d:", x,y);
    return 0;
}
