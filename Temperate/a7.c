#include<stdio.h>

main(){
	
	int num, number;
	
	printf("Press 1 for English \nPress 2 for Hindi \nPress 3 for Gujarati");
	
	printf("\nEnter Your Choice :");
	scanf("%d", &num);
	
	switch(num){
		case 1:
			printf("Press 1 for Internet Recharge \nPress 2 for Top-up Recharge \nPress 3 for Special Recharge");
			printf("\nEnter Your Choice :");
			scanf("%d", &number);
				switch(number){
					case 1 : printf("You have successfully done Internet Recharge.");
					break;
					case 2 : printf("You have successfully done Top-up Recharge.");
					break;
					case 3 : printf("You have successfully done Special Recharge.");
					break;
					default:
						printf("please enter valid Choice");
					}
			break;
		case 2:
			printf("Internet Recharge ke liye 1 dabaiye \nTop-up Recharge ke liye 2 dabaiye \nSpecial Recharge ke liye 3 dabaiye");
			scanf("%d", &number);
			switch(number){
				case 1 : printf("Aapne safaltapurvak Internet Recharge kar liya he.");
				break;
				case 2 : printf("Aapne safaltapurvak Top-up Recharge kar liya he.");
				break;
				case 3 : printf("Aapne safaltapurvak Special Recharge kar liya he.");
				break;
				default:
					printf("please enter valid Choice");
			}
			break;
		case 3:
			printf("Internet Recharge mate 1 dabavo \nTop-up Recharge mate 2 dabavo \nSpecial Recharge mate 3 dabav");
			scanf("%d", &number);
			switch(number){
				case 1 : printf("Tame safaltapurvak Internet Recharge karyu chhe.");
				break;
				case 2 : printf("Tame safaltapurvak Top-up Recharge karyu chhe.");
				break;
				case 3 : printf("Tame safaltapurvak Special Recharge karyu chhe.");
				break;
				default:
					printf("please enter valid Choice");
			}
			break;
		default:
			printf("please enter valid Choice");
	}
		
}
