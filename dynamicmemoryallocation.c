// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    int arr[]={1,2,3,4,5};
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum+=arr[i];
    }
    printf("Sum of array:%d\n",sum);
    
   
   
    int *p, sum1=0;
    int numberofEle;
    printf("Enter the number of element");
    scanf("%d", &numberofEle);
    p=(int*)malloc(numberofEle*sizeof(int));
    for(int i=0; i<numberofEle; i++)
    {
        scanf("%d", p+i);
    }
    for(int i=0; i<numberofEle; i++)
    {
        printf("%d\n", *p+i);
        sum1+=*(p+1);
    }
    printf("Sum of all element%d", sum1);
    
    // printf(sizeof(*p));?
    
    return 0;
}
