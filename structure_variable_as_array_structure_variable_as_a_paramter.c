// Online C compiler to run C program online
#include <stdio.h>

//Structure definition
struct Employee{
    int id;
    char name[20];
    float salary;
    char address[30];
};

void display1(struct Employee emp1, float netSalary)
{
   printf("Id:%d\n",emp1.id);
   printf("Employee Name:%s\n",emp1.name);
   printf("Basic Salary:%f\n",emp1.salary);
   printf("Address:%s\n",emp1.address);
   printf("Net Salary:%f", netSalary);
}
float calculateSalary(struct Employee e)
{
    // Gross_Salary=Basic+HRA+TA+DA	
    // Net_Salary=Gross_Salary-PF-ESI	
    float grossSalary=0, netSalary=0,hra,ta,da,pf,esi;
    printf("Basic Salaryyyyy:%f\n", e.salary);
    hra=e.salary*.4;
    ta=.3*e.salary;
    da=.4*e.salary;
    pf=.12*e.salary;
    esi=.2/100*e.salary;
    printf("Hra:%f\n",hra);
    printf("ta:%f\n",ta);
    printf("da:%f\n",da);
    grossSalary=e.salary+hra+ta+da;
    printf("Gross Salary:%f\n", grossSalary);
    netSalary=grossSalary-pf-esi;
    printf("Net Salary Salary:%f\n", netSalary);
    return netSalary;
}
void input(struct Employee emp1) // formal parameter
{
   printf("Enter the details for employee\n");
   printf("Enter the id:");
   scanf("%d", &emp1.id);
   printf("Enter the name:");
   scanf("%s", emp1.name);
   printf("Enter the salary:");
   scanf("%f",&emp1.salary);
   printf("Enter the address:");
   scanf("%s", emp1.address);
    float netS=calculateSalary(emp1);
    display1(emp1,netS);
}


int main() {
   // structure variable;
   // user input to the structure variable
   struct Employee emp[5]; // actual parameter
   for(int i=0; i<2; i++)
   {
       input(emp[i]);
   }
  
  
    return 0;
}
