// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro");
    
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int sum=0;
    do{
        int r=n%10;
        sum+=r;
        n/=10;
    }while(n!=0);
    
    printf("%d", sum);

    return 0;
}
