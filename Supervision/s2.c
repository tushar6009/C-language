#include <stdio.h>

struct Students {
    int std_id;
    char std_name[50];
    int std_chemistry;
    int std_mathematics;
    int std_physics;
};

int main() 
{
    int i, n;

    printf("\nEnter the number of Student => ");
    scanf("%d", &n);

    struct Students stud[n];

    for (i = 0; i < n; i++) 
	{
    	printf("\nEnter details for Student => %d\n", i + 1);
    	printf("Roll No => ");
    	scanf("%d", &stud[i].std_id);
    	printf("Name => ");
    	scanf(" %[^\n]", stud[i].std_name);
    	printf("Chemistry => ");
    	scanf("%d", &stud[i].std_chemistry);
    	printf("Mathematics => ");
    	scanf("%d", &stud[i].std_mathematics);
    	printf("Physics => ");
    	scanf("%d", &stud[i].std_physics);
	}


    printf("\nStudent Result \n\n");
    for (i = 0; i < n; i++) 
	{
        printf("%s", stud[i].std_name);
        printf(" (%d)\n", stud[i].std_id);
        printf("Chemistry => %d\n", stud[i].std_chemistry);
        printf("Mathematics => %d\n", stud[i].std_mathematics);
        printf("Physics => %d\n", stud[i].std_physics);
        
        int total = (stud[i].std_chemistry + stud[i].std_mathematics + stud[i].std_physics);
		printf("Total => %d/300\n", total);
        
		float percentage = ((float)(stud[i].std_chemistry + stud[i].std_mathematics + stud[i].std_physics) / 300) * 100;
		printf("Percentage => %.2f%%\n", percentage);
		
		printf("\n\n");
    }
}

