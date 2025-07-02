#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro");
    int arr[6];
    printf("Enter the elements in  the array");
    for(int i=0; i<6; i++)
    {
        scanf("%d", & arr[i]);
    }
    for(int i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }
    int l=0;
    int r=sizeof(arr)/sizeof(arr[0])-1;
    // printf("\n%d", r);
    int find;
    printf("Enter the element to be searched in the array:");
    scanf("%d", & find);
    int mid=(l+r)/2;
    while(l<=r)
    {
        if(arr[mid]==find)
        {
            printf("Element found at%d:%d", mid+1, arr[mid]);
            break;
        }
        else if(find< arr[mid])
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
        mid=(l+r)/2;
    }

    return 0;
}
