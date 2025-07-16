// Online C compiler to run C program online
#include <stdio.h>
struct Student{
    int id;
    char name[100];
    float m1,m2,m3;
    char address[100];
}S1; // structure declaration and Structure variable declaration

int main() {
    // Write C code here
    struct Student st1,s2;
    printf("Enter thhe details of the student:\n");
    printf("Enter the id:");
    scanf("%d", &s2.id);
    printf("Enter the name of student");
    scanf("%s", s2.name);
    printf("Enter the marks of three subject");
    scanf("%f%f%f",&s2.m1,&s2.m2,&s2.m3);
    printf("Enter the address");
    scanf("%s",s2.address);
    
    printf("------------------------------Output------------------\n");
    printf("ID:%d\n", s2.id);
    printf("Name of Student:%s\n",s2.name);
    printf("Marks of Three Subject:%f %f %f\n",s2.m1,s2.m2,s2.m3);
    printf("Address:%s\n",s2.address);
    
    return 0;
}
