/*1.Create a structure called "Student" with members name, age, 
and total marks. Write a C program to input data for two students,
display their information, and find the average of total marks.*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[101];
    int age;
    int marks;
};


int main()
{
    struct Student n1, n2;
    char temp1[101];
    char temp2[101];
    scanf("%s", temp1);
    strcpy(n1.name, temp1);
    scanf("%d %d", &n1.age, &n1.marks);
    getchar();
    scanf("%s", temp2);
    strcpy(n2.name, temp2);
    scanf("%d %d", &n2.age, &n2.marks);

    printf("%s %d %d\n", n1.name, n1.age, n1.marks);
    printf("%s %d %d\n", n2.name, n2.age, n2.marks);
    printf("Average of total marks: %.2f", (float) (n1.marks+n2.marks)/2);
   
    return 0;
}