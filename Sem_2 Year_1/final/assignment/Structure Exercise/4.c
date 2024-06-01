/*4.Design a structure named "Car" to store details like car ID, 
model, and rental rate per day. Write a C program to input data 
for three cars, calculate the total rental cost for a specified 
number of days, and display the results.*/


#include <stdio.h>
#include <string.h>

struct Car
{
    int id;
    char model[101];
    int rental_rate;
};

int main()
{
    struct Car cars[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &cars[i].id);
        scanf("%s", &cars[i].model);
        scanf("%d", &cars[i].rental_rate);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", cars[i].id);
        printf("%s\n", cars[i].model);
        printf("%d\n", cars[i].rental_rate);
    }
    
    printf("Total rental cost of how many days?\n");
    int k;
    scanf("%d", &k);
    int total_cost_per_day = cars[0].rental_rate+cars[1].rental_rate+
    cars[2].rental_rate;
    printf("%d", k*total_cost_per_day);
    


    return 0;
}