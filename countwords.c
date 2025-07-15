// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char name[]="Hello my name is vijay";
    printf("%s\n", name);
     int count=0;
    for(int i=0; name[i]!='\0'; i++)
    {
        if(name[i]==' ')
        {
            count++;
        }
    }
    printf("Number of Words:%d", count+1);
    return 0;
}
