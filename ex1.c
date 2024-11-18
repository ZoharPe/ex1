/******************
Name: Zohar Perets
ID: *******
Assignment: Ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  int numberTask1, positionTask1;

  printf("Please enter a number:\n");
  scanf("%d", &numberTask1);
  printf("Please enter a position:\n");
  scanf("%d", &positionTask1);

  //Right shifting number by position and masking by one to check the bit in the given position
  int bitTask1 = (numberTask1 >> positionTask1) & 1;
  printf("The bit in position %d of number %d is: %d\n", positionTask1,numberTask1, bitTask1);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int numberTask2, positionTask2;

  printf("Please enter a number:\n");
  scanf("%d", &numberTask2);
  printf("Please enter a position:\n");
  scanf("%d", &positionTask2);

  //Creating a "mask" for setting the bit in the given position by left shift
  int maskTask2 = 1<<positionTask2;
  //Make sure the bit in the given position is on using OR
  int valueIfBitIsOnTask2 = numberTask2 | maskTask2;
  //Make sure the bit in the given position is off using AND and NOT
  int valueIfBitIsOffTask2 = numberTask2 & (~maskTask2);
  printf("Number with bit %d set to 1: %d\n", positionTask2,valueIfBitIsOnTask2);
  printf("Number with bit %d set to 0: %d\n", positionTask2,valueIfBitIsOffTask2);


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int numberTask3, positionTask3;

  printf("Please enter a number:\n");
  scanf("%d", &numberTask3);
  printf("Please enter a position:\n");
  scanf("%d", &positionTask3);

  //Creating a "mask" for toggle
  int maskTask3 = 1 << positionTask3;
  //Using XOR for changing the bit value
  int toggledNumberTask3 = numberTask3 ^ maskTask3;
  printf("Number with bit %d toggled: %d\n", positionTask3,toggledNumberTask3);



  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  int numberTask4;

  printf("Please enter a number:\n");
  scanf("%d", &numberTask4);

  //Masking by one to check the LSB
  int isEvenNumberTask4 = (numberTask4  & 1)&0;
  printf("%d",isEvenNumberTask4 );


  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int maskTask5 = 1;
  int firstNumberTask5, secondNumberTask5;
  int sumTask5;
  int sumBit3Task5, sumBit5Task5, sumBit7Task5, sumBit11Task5;

  printf("Please enter the first number (octal):\n");
  scanf("%o", &firstNumberTask5);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &secondNumberTask5);

  sumTask5=firstNumberTask5+secondNumberTask5;
  printf("The sum in hexadecimal: %X\n", sumTask5);

  //Check the bits in the n position by right shift by n and masking by one
  sumBit3Task5 = (sumTask5 >> 3) & maskTask5;
  sumBit5Task5 = (sumTask5 >> 5) & maskTask5;
  sumBit7Task5 = (sumTask5 >> 7) & maskTask5;
  sumBit11Task5 = (sumTask5 >> 11) & maskTask5;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", sumBit3Task5, sumBit5Task5, sumBit7Task5, sumBit11Task5);

  printf("Bye!\n");
  
  return 0;
}
