
// a program to print name initials using astericks.
#include<stdio.h>   
int sain()
{    
	// defining the four subjects as varables using int and float
	int Subject_1 = 60.7,  Subject_2  = 100;
	float Subject_3 = 75.8889, Subject_4 = 82.9 ;
	float Subject_01 = (float)Subject_1;
	// using the printf function to output the asteriks 
	printf("*********************************************************************************************************************\n");
	printf("                           *                           *                           *******                              \n");
	printf("                          * *                         * *                          *                                   \n");
	printf("                         *****                       *****                         *******                             \n");
	printf("                        *     *                     *     *                              *                             \n");
	printf("                       *       *                   *       *                       *******                             \n");
	printf("*********************************************************************************************************************\n");
	// printiong the marks in subjects on the screen one by one 
	printf("\t\t\t\t\t        Subject 1= %.1f \n ", Subject_01);
	printf("\t\t\t\t\t        Subject 2 = %d \n", Subject_2);
	printf("\t\t\t\t\t        Subject 3 = %.4f \n", Subject_3);
	printf("\t\t\t\t\t        Subject 4 = %.2f", Subject_4);

		
	getch();
	return 0;
} 