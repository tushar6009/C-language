#include <stdio.h>

struct Employees {
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main() 
{
    int i, n;

    printf("Enter the number of Employees: ");
    scanf("%d", &n);

    struct Employees empl[n];

    for (i = 0; i < n; i++) 
	{
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &empl[i].emp_id);
        printf("Name: ");
        scanf(" %[^\n]", empl[i].emp_name);
        printf("Age: ");
        scanf("%d", &empl[i].emp_age);
        printf("Role: ");
        scanf(" %[^\n]", empl[i].emp_role);
        printf("City: ");
        scanf(" %[^\n]", empl[i].emp_city);
        printf("Experience: ");
        scanf("%d", &empl[i].emp_experience);
        printf("Company Name: ");
        scanf(" %[^\n]", empl[i].emp_company_name);
    }

    printf("\nEmployee Records:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", empl[i].emp_id);
        printf("Name: %s\n", empl[i].emp_name);
        printf("Age: %d\n", empl[i].emp_age);
        printf("Role: %s\n", empl[i].emp_role);
        printf("City: %s\n", empl[i].emp_city);
        printf("Experience: %d\n", empl[i].emp_experience);
        printf("Company Name: %s\n", empl[i].emp_company_name);
        printf("\n\n");
    }
}

