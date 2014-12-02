#include <stdio.h>


void main(void)
{
  const int ci5 = 5;    /* constant int */
 /* const int ci6; ERROR: 'ci6' : const object must be initialized if not extern */	
  int i;                // int
  int *p_i;             /* Pointer to int */

  int const *p_ci;      /* Pointer to constant int */
  int const (*p_ci2);   /* Pointer to constant int */
  const int *p_ci3;     /* Pointer to constant int */
  const int (*p_ci4);   /* Pointer to constant int */

  p_ci = &i;                      /* Good case */ /* currently uninitialized int */
  printf("*p_ci: %d \n", *p_ci); /* print: currently uninitialized int */


  
  printf("ci5: %d \n", ci5);    // print: ci5
 // printf("i: %d \n", i);      // print: i 
}