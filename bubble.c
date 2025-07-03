// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[100];
    int size;
    printf("Enter the size of array");
    scanf("%d", &size);
    printf("Enter the elements in the array");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Unsorted Array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];  // int c=a
                a[j]=a[j+1];    // a=b
                a[j+1]=temp;    // b=c
            }
        }
    }
    printf("\nSorted array:");
    for(int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
