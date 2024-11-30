#include <stdio.h>
#include <string.h>
int choice;
char medicine[40], medicine1[40];
     
    float dosage, dosage1;
void welcome(){

	printf("\n welcome to medicine reminder system ");
	printf("\n _________________________________________________________");
	printf("\n press any key to continue");
	getchar();	
}	
void input(){
printf("\n 1. Hypertension");
    printf("\n 2. Diabetes");
    printf("\n 3. Cholesterol");
    printf("\n 4. Arthritis");
    printf("\nSelect your disease by entering the corresponding number: ");
    scanf("%d", &choice);	
} 
void calculation(){
switch (choice) {
        case 1:
            strcpy(medicine, "carvedilol");
            dosage = 6.25;
            printf("\nYour disease: Hypertension\n");
            printf("Your medicine: %s\n", medicine);
            printf("Your dosage: %.2f\n", dosage);
            break;
        case 2:
            strcpy(medicine, "metformin");
            dosage = 500;
            strcpy(medicine1, "insulin");
            dosage1 = 6.6;
            printf("\nYour disease: Diabetes\n");
            printf("Your primary medicine: %s\n", medicine);
            printf("Your primary dosage: %.2f\n", dosage);
            printf("Your secondary medicine: %s\n", medicine1);
            printf("Your secondary dosage: %.2f\n", dosage1);
            break;
        case 3:
            strcpy(medicine, "pravastatin");
            dosage = 25;
            strcpy(medicine1, "rosuvastatin");
            dosage1 = 7.5;
            printf("\nYour disease: Cholesterol\n");
            printf("Your primary medicine: %s\n", medicine);
            printf("Your primary dosage: %.2f\n", dosage);
            printf("Your secondary medicine: %s\n", medicine1);
            printf("Your secondary dosage: %.2f\n", dosage1);
            break;
        case 4:
            strcpy(medicine, "ibuprofen");
            dosage = 400;
            strcpy(medicine1, "advil");
            dosage1 = 600;
            printf("\nYour disease: Arthritis\n");
            printf("Your primary medicine: %s\n", medicine);
            printf("Your primary dosage: %.2f\n", dosage);
            printf("Your secondary medicine: %s\n", medicine1);
            printf("Your secondary dosage: %.2f\n", dosage1);
            break;
        
           
} 
}
 main() 
{
    
    welcome();
    input();
    calculation();
}
void output(){
	
 printf("\nUnknown disease selection.\n");	
}


   

   
