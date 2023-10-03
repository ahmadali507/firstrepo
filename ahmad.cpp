// a program to print name initials using astericks.
#include<iostream>  
using namespace std;
int main()
{
	// defining the four subjects as varables using int and float
	int Subject_1 = 60.7, Subject_2 = 100;
	float Subject_3 = 75.8889, Subject_4 = 82.9;
	
	// using the printf function to output the asteriks 
	cout<<"*********************************************************************************************************************\n";
	cout<<"                           *                           *                           *******                              \n";
	cout<<"                          * *                         * *                          *                                   \n";
	cout<<"                         *****                       *****                         *******                             \n";
	cout<<"                        *     *                     *     *                              *                             \n";
	cout<<"                       *       *                   *       *                       *******                             \n";
	cout<<("*********************************************************************************************************************\n";
	// printiong the marks in subjects on the screen one by one 
	cout<<"\t\t\t\t\t          Subject 1 = %d" << Subject_1<<endl;
	cout << "\t\t\t\t\t        Subject 2 = %d" << Subject_2 << endl;
	cout << "\t\t\t\t\t        Subject 3 = %.4f" << Subject_3 << endl;
	cout << "\t\t\t\t\t        Subject 4 = %.2f" << Subject_4 << endl;


	getchar();
	return 0;
}