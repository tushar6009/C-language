#include<stdio.h>

main(){
	
	int num, number;
	
	printf("Press 1 for Starters \nPress 2 for Sides \nPress 3 for Desserts \nPress 4 for Mains \nPress 5 for Drinks");
	
	printf("\nEnter Your Choice :");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			printf("Press 1 for Green Salad \nPress 2 for Lasagne \nPress 3 for Olivas Rellenas");
			printf("\nEnter Your Choice :");
			scanf("%d", &number);
				switch(number){
					case 1 : printf("Your Order for Green Salad is successfully done.");
					break;
					case 2 : printf("Your Oreder for Lasagne is successfully done.");
					break;
					case 3 : printf("Your Order for Olivas Rellenas is successfully done.");
					break;
					default:
						printf("please enter valid Choice");
					}
			break;
		case 2:
			printf("Press 1 for Green Fries \nPress 2 for Onion Rings \nPress 3 for Coleslaw");
			printf("\nEnter Your Choice :");
			scanf("%d", &number);
			switch(number){
				case 1 : printf("Your Order for Green Fries is successfully done.");
				break;
				case 2 : printf("Your Order for Onion Rings is successfully done.");
				break;
				case 3 : printf("Your Order for Coleslaw is successfully done.");
				break;
				default:
					printf("please enter valid Choice");
			}
			break;
		case 3:
			printf("Press 1 for Banana Split \nPress 2 for Cherry Pie \nPress 3 for Apple Pie");
			printf("\nEnter Your Choice :");
			scanf("%d", &number);
			switch(number){
				case 1 : printf("Your Order for Banana Split is successfully done.");
				break;
				case 2 : printf("Your Order for Cherry Pie is successfully done.");
				break;
				case 3 : printf("Your Order for Apple Pie is successfully done.");
				break;
				default:
					printf("please enter valid Choice");
			}
		case 4:
			printf("Press 1 for Lenguado \nPress 2 for Bacalao Frito \nPress 3 for Paella Mixta");
			printf("\nEnter Your Choice :");
			scanf("%d", &number);
			switch(number){
				case 1 : printf("Your Order for Lenguado is successfully done.");
				break;
				case 2 : printf("Your Order for Bacalao Frito is successfully done.");
				break;
				case 3 : printf("Your Order for Paella Mixta is successfully done.");
				break;
				default:
					printf("please enter valid Choice");
			}
		case 5:
			printf("Press 1 for Soft Drinks \nPress 2 for Coffee \nPress 3 for Fresh Juice");
			printf("\nEnter Your Choice :");
			scanf("%d", &number);
			switch(number){
				case 1 : printf("Your Order for Soft Drinks is successfully done.");
				break;
				case 2 : printf("Your Order for Coffee is successfully done.");
				break;
				case 3 : printf("Your Order for Fresh Juice is successfully done.");
				break;
				default:
					printf("please enter valid Choice");
			}
			break;
		default:
			printf("please enter valid Choice");
	}
		
}
