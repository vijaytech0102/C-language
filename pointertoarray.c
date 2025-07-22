// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
	int arr[10]={10,20,30,40,50,60,70,80,90,100};    //Array initialization.				
	int i;				
	for(i=0;i<10;i++)				
	{				
		printf("%d  ", arr[i]);	// normally loop	
	}
	printf("\n");
	int *ptr=arr;// base address
	for(i=0;i<10;i++)				
	{				
		printf("%d  ", *(ptr+));	// through pointer
	}				

    return 0;
}
