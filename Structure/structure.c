#include <stdio.h>

struct Student {
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

main() {
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student stud[n];

    for (i = 0; i < n; i++) 
	{
        printf("Enter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &stud[i].stu_id);
        printf("Name: ");
        scanf(" %[^\n]", stud[i].stu_name);
        printf("Age: ");
        scanf("%d", &stud[i].stu_age);
        printf("Course: ");
        scanf(" %[^\n]", stud[i].stu_course);
        printf("City: ");
        scanf(" %[^\n]", stud[i].stu_city);
        printf("Standard: ");
        scanf("%d", &stud[i].stu_standard);
        printf("School: ");
        scanf(" %[^\n]", stud[i].stu_school);
    }

    printf("\nStudent Records:\n");
    for (i = 0; i < n; i++) 
	{
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", stud[i].stu_id);
        printf("Name: %s\n", stud[i].stu_name);
        printf("Age: %d\n", stud[i].stu_age);
        printf("Course: %s\n", stud[i].stu_course);
        printf("City: %s\n", stud[i].stu_city);
        printf("Standard: %d\n", stud[i].stu_standard);
        printf("School: %s\n", stud[i].stu_school);
        printf("\n\n");
    }
}

