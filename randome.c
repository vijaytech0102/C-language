	#include <stdlib.h>				
	#include <stdio.h>				
			
	int main(void)				
	{				
	   int i, n;				
	   //randomize();	
	   printf("\n10 random numbers from 0 to 99\n\n");				
	for(i=0; i<100; i++)
	{				
        	n=rand()%1000;				
	      printf("%d\n", n);				
	}
	return 0;
	}
