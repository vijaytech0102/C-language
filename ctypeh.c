// Online C compiler to run C program online
#include <stdio.h>
#include<ctype.h>
void main() {
    // Write C code here
    char ch;
    printf("Enter the character:");
    scanf("%c", &ch);
    if(isalpha(ch))
    {
        printf("It is alphabet\n");
    }
    else{
        printf("Not a alphabet\n");
    }
    
    if(isdigit(ch))
    {
        printf("This is digit\n");
    }
    else{
        printf("Not a digit\n");
    }
    if(isalnum(ch))
    {
        printf("Either digit or alphabet\n");
    }
    else{
        printf("Special Symbol\n");
    }
    if(islower(ch))
    {
        printf("Small letter\n");
    }
    else{
        printf("Capital letter\n");
    }
    if(isupper(ch))
    {
        printf("Capital\n");
    }
    else{
        printf("Small\n");
    }
    printf("%c", toupper(ch));
    printf("%c", tolower(ch));
}
