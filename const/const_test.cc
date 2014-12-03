#include <stdio.h>


void main(void)
{
  const int ci5 = 5;    /* constant int */
 /* const int ci6; ERROR: 'ci6' : const object must be initialized if not extern */	
  int i;                // int
  int *p_i = &i;        /* Pointer to int */


  int const *p_ci;      /* Pointer to constant int */
  int const (*p_ci2);   /* Pointer to constant int */
  const int *p_ci3;     /* Pointer to constant int */
  const int (*p_ci4);   /* Pointer to constant int */

  p_ci = &i;                      /* Good case */ /* currently uninitialized int */
  printf("*p_ci: %d(0x%x) \n", *p_ci, *p_ci);  /* print: currently uninitialized int 
                                     compiled case and ok in 2 modes (Release and Debug)
                                  */

  p_ci4 = p_i; // compiled case and ruuning is ok in 2 modes (Release and Debug)
  //  no warning: uninitialized local variable 'p_i' used because in line 9 we have (int *p_i = &i;)
  printf("*p_ci4: %d(0x%x) \n", *p_ci4, *p_ci4); // print: currently uninitialized int 

  
  printf("ci5: %d(0x%x) \n", ci5, ci5);    // print: ci5
 // printf("i: %d \n", i);      // print: i 
}