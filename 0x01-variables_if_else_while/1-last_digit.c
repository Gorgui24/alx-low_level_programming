#include <stdio.h>                                                                                                                                   

#include <stdlib.h>                                                                                                                                  

                                                                                                                                                     

#include <time.h>                                                                                                                                    

/* more headers goes there */                                                                                                                        

                                                                                                                                                     

                                                                                                                                                     

                                                                                                                                                     

/* betty style doc for function main goes there */                                                                                                   

                                                                                                                                                     

/**                                                                                                                                                  
 *
 * main - print last digit of a number depending conditions                                                                                   
 *                                                                                                                                                   
 *
 * Return: Always 0 (Success)                                                                                                              
 *
 */

int main(void)  

{
	int n;                 

	srand(time(0));   
	n = rand() - RAND_MAX / 2;                                                                                        
	/* your code goes there */                                                             

	int last_Digit = n % 10;                                                                             

	if (last_Digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_Digit);                           
	if (last_Digit == 0)                                                                    
	       	printf("Last Digit of %d is %d and 0\n", n, last_Digit);                                                                  
	if (last_Digit < 6 && != 0)                                                                                              
	       	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_Digit);                                                       
                                                                 
	return (0);                                                                                                                                  

									                                                                          
}                                                                

