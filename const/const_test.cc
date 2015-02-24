#include <stdio.h>


void main(void)
{
  const int ci5 = 5;    /* constant int */
  const int arr[5]= {1,2,3,4,5};    /* constant int array*/
 /* const int ci6; ERROR: 'ci6' : const object must be initialized if not extern */	
  int i;                // int
  int *p_i = &i;        /* Pointer to int */


  int const *p_ci;      /* Pointer to constant int */
  int const (*p_ci2);   /* Pointer to constant int */
  const int *p_ci3;     /* Pointer to constant int */
  const int (*p_ci4);   /* Pointer to constant int */

  p_ci = &i;                      /* Good case */ /* currently uninitialized int */
 // p_ci[0] = 2; // error C3892: 'p_ci' : you cannot assign to a variable that is const

  printf("*p_ci: %d(0x%x) \n", *p_ci, *p_ci);  /* print: currently uninitialized int 
                                     compiled case and ok in 2 modes (Release and Debug)
                                  */

  p_ci4 = p_i; // compiled case and ruuning is ok in 2 modes (Release and Debug)
  //  no warning: uninitialized local variable 'p_i' used because in line 9 we have (int *p_i = &i;)
  printf("*p_ci4: %d(0x%x) \n", *p_ci4, *p_ci4); // print: currently uninitialized int 

  printf("before i:  %d(0x%x) \n", i, i);      // print: i 

  p_i[0] = 1;
 // p_ci[0] = 2; // error C3892: 'p_ci' : you cannot assign to a variable that is const
  int (*const cp_i) = &i;   /* Constant pointer to int */
  int const * const cp_ci = &i;

  *cp_i = 5;
//   *cp_ci = 5;  error C3892: 'cp_ci' : you cannot assign to a variable that is const
   p_ci = &ci5;
   int j = p_ci4[0];
   int j1 = cp_ci[1]; // currently uninitialized int
  printf("ci5: %d(0x%x) \n", ci5, ci5);    // print: ci5
  printf("after i:  %d(0x%x) \n", i, i);      // print: i 
}