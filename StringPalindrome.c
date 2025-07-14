// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    char name[20];
    printf("Enter the name:");
    scanf("%s",name);
    printf("Output:%s\n", name);
    
    
    int length=strlen(name);
    // two pointer approach
    int l=0;
    int r=length-1;
    
    int flag=0;
    while(l<=r)
    {
        if(name[l]!=name[r])
        {
            printf("Not a palindrome");
            break;
        }
        else{
            flag=1;
        }
        l++;
        r--;
    }
    if(flag==1)
    {
        printf("String pallindrome:%s:",name);
    }
    printf("%d", length);
    return 0;
}
