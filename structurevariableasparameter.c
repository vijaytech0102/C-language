// Online C compiler to run C program online
#include <stdio.h>
struct Student{
    int id;
    char name[20];
    char address[20];
    float subject[5];
};

struct Student s[100]; // structure variable as an array --> global declaration
void display(struct Student student)
{
    printf("----------------------");
    printf("Id:%d\n", student.id);   
    printf("Name:%s\n", student.name);   
    printf("Address:%s\n", student.address);   
    
    for(int i=0; i<5; i++)
    {
        printf("Subject%d:%f ", i+1,student.subject[i]);
    }
}
void inputdata(struct Student student)
{
    printf("Enter the Id of the Student:");
    scanf("%d",&student.id);
    printf("Enter the name:");
    scanf("%s", student.name);
    printf("Enter the address:");
    scanf("%s", student.address);
    for(int i=0; i<5; i++)
    {
        printf("Enter the subject mark of:%d", i+1);
        scanf("%f", &student.subject[i]);
    }
    display(student);
}

int main() {
    // Write C code here
    printf("Enter the number of students");
    int numberofStudent;
    scanf("%d", &numberofStudent);
    for(int i=0; i<numberofStudent; i++)
    {
        inputdata(s[i]);
    }
    // for(int i=0; i<numberofStudent; i++)
    // {
    //     display(s[i]);
    // }
    return 0;
}
