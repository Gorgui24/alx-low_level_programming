#include <stdio.h>                                                              
#include <stdlib.h>                                                            
#include <time.h>                                                               
/**
 * main - print with condition
 *
 * Return: 0
 *
 */

int main(void)  

{
	int n, last_Digit;                 

	srand(time(0));   
	n = rand() - RAND_MAX / 2;                                                                                        
	/* your code goes there */                                            
	last_Digit = n % 10;                                                                             

	if (last_Digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_Digit);                           
	if (last_Digit == 0)                                                                    
	       	printf("Last Digit of %d is %d and 0\n", n, last_Digit);                                                                  
	if (last_Digit < 6 && last_Digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_Digit);                                                       
                                                                 
	return (0);                                                            
}                                                                


