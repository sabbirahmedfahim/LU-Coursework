/*3.Create a structure named "Employee" to store employee details 
such as employee ID, name, and salary. Write a program to input data
for three employees, find the highest salary employee, and display 
their information.*/

/*2.Create a structure named Book to store book details like title,
author, and price. Write a C program to input details for three books,
find the most expensive and the lowest priced books, and display their
information.*/

/*1.Create a structure called "Student" with members name, age,
and total marks. Write a C program to input data for two students,
display their information, and find the average of total marks.*/

#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[101];
    int salary;
};

int main()
{
    struct Employee n1, n2, n3;
    char temp1[101];
    char temp2[101];
    char temp3[101];
    fgets(temp1, 101, stdin);
    strcpy(n1.name, temp1);
    scanf("%d %d", &n1.id, &n1.salary);

    getchar();
    fgets(temp2, 101, stdin);
    strcpy(n2.name, temp2);
    scanf("%d %d", &n2.id, &n2.salary);

    getchar();
    fgets(temp3, 101, stdin);
    strcpy(n3.name, temp3);
    scanf("%d %d", &n3.id, &n3.salary);
    

    printf("%d %s %d\n", n1.id, n1.name, n1.salary);
    printf("%d %s %d\n", n2.id, n2.name, n2.salary);
    printf("%d %s %d\n", n3.id, n3.name, n3.salary);

    if (n1.salary>n2.salary && n1.salary>n3.salary)
    {
        printf("%d %s %d\n", n1.id, n1.name, n1.salary);
    }
    else if (n2.salary>n1.salary && n2.salary>n3.salary)
    {
        printf("%d %s %d\n", n2.id, n2.name, n2.salary);
    }
    else if (n3.salary>n2.salary && n3.salary>n1.salary)
    {
        printf("%d %s %d\n", n3.id, n3.name, n3.salary);
    }

    return 0;
}