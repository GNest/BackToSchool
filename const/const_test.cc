#include <stdio.h>


void main(void)
{
  const int ci5 = 5;	/* constant int */
 /* const int ci6; ERROR: 'ci6' : const object must be initialized if not extern */	
  int i;			      	// int
  

  printf("ci5: %d \n", ci5);  // print: ci5
  printf("i: %d \n", i);      // print: i 
}