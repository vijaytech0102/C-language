// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
   char ch;
    printf("Enter the character you want to check:");
    scanf("%c",&ch);
    char name[]="Hello my name is vijay";
    printf("%s\n", name);
     int count=0;
    int flag=0;
    printf("\n%d\n", strlen(name));
    for(int i=0; i<strlen(name); i++)
    {
        if(name[i]==ch)
        {
            flag=1;
        }
        if(name[i]==' ')
        {
            count++;
        }
    }
    if(flag)
    {
        printf("It is present in the string:%c\n",ch);
    }
    else
    {
        printf("Not present:%c\n", ch);
    }
    printf("Number of Words:%d",count+1);
    return 0;
}
