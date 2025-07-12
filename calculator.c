// Online C compiler to run C program online
#include <stdio.h>

int add(int a, int b)
    {
        return a+b;
    }

int sub(int a, int b)
    {
        return a-b;
    }

int mul(int a, int b)
    {
        return a*b;
    }

int divide(int a, int b)
    {
        return a/b;
    }

int mod(int a, int b)
    {
        return a%b;
    }
int main() {
    

    char c;
    do{
    printf("----------Calculator--------\n");
    printf("1.Addition\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Division\n");
    printf("5.Modulous\n");
    int ch;
    printf("Enter your choice");
    scanf("%d",&ch);
    
    int a, b;
    char consume;
    if(ch==1)
    {
        printf("Enter the two numbers");
        scanf("%d%d", &a, &b);
        int res=add(a,b);
        printf("Addtion:%d", res);
    }
    
    else if(ch==2)
    {
        printf("Enter the two numbers");
        scanf("%d%d", &a, &b);
        int res=sub(a,b);
        printf("Subtraction:%d", res);
    }
    else if(ch==3)
    {
        printf("Enter the two numbers");
        scanf("%d%d", &a, &b);
        int res=mul(a,b);
        printf("Multiply:%d", res);
    }
    else if(ch==4)
    {
        printf("Enter the two numbers");
        scanf("%d%d", &a, &b);
        int res=divide(a,b);
        printf("Divide:%d", res);
    }
    else if(ch==5)
    {
        printf("Enter the two numbers");
        scanf("%d%d", &a, &b);
        int res=mod(a,b);
        printf("Modulous:%d", res);
    }
    else
    {
        printf("Wrong Choice");
    }
    printf("Do You want continue.. Y/N");
    scanf("%c", &consume);
    scanf("%c", &c);
    }while(c=='Y' || c=='y');
    
    

    return 0;
}
