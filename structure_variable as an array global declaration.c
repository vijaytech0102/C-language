// Online C compiler to run C program online
#include <stdio.h>
struct Student{
    int id;
    char name[20];
    char address[20];
    float subject[5];
};

struct Student s[100]; // structure variable as an array --> global declaration
void display()
{
    int numberofStudent;
    printf("No of student you want to print:");
    scanf("%d", &numberofStudent);
    for(int i=0; i<numberofStudent; i++)
    {
        printf("----------------------");
    printf("Id:%d\n", s[i].id);   
    printf("Name:%s\n", s[i].name);   
    printf("Address:%s\n", s[i].address);   
    
    for(int j=0; j<5; j++)
    {
        printf("Subject%d:%f ", i+1,s[i].subject[j]);
    }
    }
}
void inputdata()
{
    printf("Enter the number of students");
    int numberofStudent;
    scanf("%d", &numberofStudent);
    for(int i=0; i<numberofStudent; i++)
    {
    printf("Enter the Id of the Student:");
    scanf("%d",&s[i].id);
    printf("Enter the name:");
    scanf("%s", s[i].name);
    printf("Enter the address:");
    scanf("%s", s[i].address);
    for(int j=0; j<5; j++)
    {
        printf("Enter the subject mark of:%d", j+1);
        scanf("%f", &s[i].subject[j]);
    }
    }
}

int main() {
    inputdata();
    display();
    return 0;
}
