/*2.Create a structure named Book to store book details like title,
author, and price. Write a C program to input details for three books,
find the most expensive and the lowest priced books, and display their
information.*/

/*1.Create a structure called "Student" with members name, age,
and total marks. Write a C program to input data for two students,
display their information, and find the average of total marks.*/

#include <stdio.h>
#include <string.h>

struct Book
{
    char title[101];
    char author[101];
    int price;
};

int main()
{
    struct Book n1, n2, n3;
    char temp1[101];
    char temp2[101];
    char temp3[101];
    char temp4[101];
    char temp5[101];
    char temp6[101];
    fgets(temp1, 101, stdin);
    strcpy(n1.title, temp1);
    fgets(temp2, 101, stdin);
    strcpy(n1.author, temp2);
    scanf("%d", &n1.price);

    getchar();
    fgets(temp3, 101, stdin);
    strcpy(n2.title, temp3);
    fgets(temp4, 101, stdin);
    strcpy(n2.author, temp4);
    scanf("%d", &n2.price);

    getchar();
    fgets(temp5, 101, stdin);
    strcpy(n3.title, temp5);
    fgets(temp6, 101, stdin);
    strcpy(n3.author, temp6);
    scanf("%d", &n3.price);
    

    printf("%s %s %d\n", n1.title, n1.author, n1.price);
    printf("%s %s %d\n", n2.title, n2.author, n2.price);
    printf("%s %s %d\n", n3.title, n3.author, n3.price);

    if (n1.price>n2.price && n1.price>n3.price)
    {
        printf("%s %s %d\n", n1.title, n1.author, n1.price);
    }
    else if (n2.price>n1.price && n2.price>n3.price)
    {
        printf("%s %s %d\n", n2.title, n2.author, n2.price);
    }
    else if (n3.price>n2.price && n3.price>n1.price)
    {
        printf("%s %s %d\n", n3.title, n3.author, n3.price);
    }

    if (n1.price<n2.price && n1.price<n3.price)
    {
        printf("%s %s %d\n", n1.title, n1.author, n1.price);
    }
    else if (n2.price<n1.price && n2.price<n3.price)
    {
        printf("%s %s %d\n", n2.title, n2.author, n2.price);
    }
    else if (n3.price<n2.price && n3.price<n1.price)
    {
        printf("%s %s %d\n", n3.title, n3.author, n3.price);
    }
    

    return 0;
}