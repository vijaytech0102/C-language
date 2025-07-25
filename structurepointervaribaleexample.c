	#include<stdio.h>							
	  struct Employees							
	{							
	  //1. Variable declaration                                                  							
	   int emp_id;							
	   char emp_name[100];                                                       //String-Set of Characters							
	   float basic_salary, hra, ta, da, pf, esi, gross_salary, net_salary;							
	};							
								
	void CalculateDisplayEmployees(struct Employees *eptr)							
	{							
	    //3. Calculation							
	    eptr->hra=eptr->basic_salary*40/100;							
	    eptr->ta=eptr->basic_salary*30/100;							
	  eptr->da=eptr->basic_salary*40/100;							
	    eptr->pf=eptr->basic_salary*12.5/100;							
	   eptr->esi=eptr->basic_salary*2/100;							
	    eptr->gross_salary=eptr->basic_salary+eptr->hra+eptr->ta+eptr->da;							
	  eptr->net_salary=eptr->gross_salary-eptr->pf-eptr->esi;							
	 //4. Output							
	    printf("_________________Output__________________");							
	    printf("\n The Employee's ID :%d",eptr->emp_id);							
	    printf("\n The Employee's Name :%s", eptr->emp_name);							
	    printf("\n The Employee's Basic Salary :%f", eptr->basic_salary);							
	    printf("\n The Employee's HRA          :%f", eptr->hra);							
	    printf("\n The Employee's TA           :%f", eptr->ta);							
	    printf("\n The Employee's DA           :%f",eptr->da);							
	    printf("\n The Employee's PF           :%f", eptr->pf);							
	    printf("\n The Employee's ESI          :%f", eptr->esi);							
	    printf("\n The Employee's GROSS Salary :%f", eptr->gross_salary);							
	    printf("\n The Employee's NET Salary   :%f", eptr->net_salary);							
	    					
	}						
	int main()						
	{						
	   struct Employees emp;					
	   struct Employees *e;				
	   e=&emp;					
	  //2.input						PF	
	    printf("\n Enter Employee's ID:");		
	    scanf("%d",&e->emp_id);							
	    printf("Enter Employee's Name:");					
	    scanf("%s",e->emp_name);							
	    printf("Enter Employee's Basic Salary:");							
	    scanf("%f",&e->basic_salary);							
	    CalculateDisplayEmployees(e);
	    
	}							
								
