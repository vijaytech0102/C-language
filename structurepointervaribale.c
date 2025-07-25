#include<stdio.h>							
  
struct Employees							
{							
  //1. Variable declaration                                                  							
   int emp_id;							
   char emp_name[100];                                                       //String-Set of Characters							
   float basic_salary, hra, ta, da, pf, esi, gross_salary, net_salary;							
};							
							
int main()							
{							
   struct Employees emp; //It is name of a structure variable.							
   struct Employees *e;		//It is pointer to a structure that can hold address of a structure.								
   e=&emp;							
   				
  //2.input							
    printf("\n Enter Employee's ID:");							
    scanf("%d",&e->emp_id);			//Accessing structure by its addresss.				
    printf("Enter Employee's Name:");							
    scanf("%s",e->emp_name);							
    printf("Enter Employee's Basic Salary:");							
    scanf("%f",&e->basic_salary);							
 //3. Calculation							
    e->hra=e->basic_salary*40/100;							
    e->ta=e->basic_salary*30/100;							
    e->da=e->basic_salary*40/100;							
    e->pf=e->basic_salary*12.5/100;							
    e->esi=e->basic_salary*2/100;							
    e->gross_salary=e->basic_salary+e->hra+e->ta+e->da;							
    e->net_salary=e->gross_salary-e->pf-e->esi;							
							
 //4. Output							
    printf("_________________Output__________________");							
    printf("\n The Employee's ID :%d",e->emp_id);							
    printf("\n The Employee's Name :%s", e->emp_name);							
    printf("\n The Employee's Basic Salary :%f", e->basic_salary);							
    printf("\n The Employee's HRA          :%f", e->hra);							
    printf("\n The Employee's TA           :%f", e->ta);							
    printf("\n The Employee's DA           :%f",e->da);							
    printf("\n The Employee's PF           :%f", e->pf);							
    printf("\n The Employee's ESI          :%f", e->esi);							
    printf("\n The Employee's GROSS Salary :%f", e->gross_salary);							
    printf("\n The Employee's NET Salary   :%f", e->net_salary);							
							
}							
