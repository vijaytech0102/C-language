// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
void seriesPalindrome(int n)
{
 for(int i=1; i<=n; i++)
 {
     int rev=0;
     int k=i;
     while(k!=0)
     {
         int rem=k%10;
         rev=rev+rem*rem*rem;
         k=k/10;
     }
     if(rev==i)
     {
         printf("%d ", i);
     }
 }
}
int main() {
    // Write C code here
    printf("Try programiz.pro");
    int num;
    printf("Enter the value of number:");
    scanf("%d", &num);
    seriesPalindrome(num);
    return 0;
}
