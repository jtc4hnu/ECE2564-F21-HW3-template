/*
 * This project is related to the problem 1 of HW3, ECE2564 Fall 2023.
 * It is important that you read the PDF homework description to understand what you need to do.
 * The comments and TODO items in this document may not be self-sufficient to tell you how to complete this project.
 */

// This is so that we can use printf
#include <stdio.h>

// This is so that we can use BIT0, BIT1, ... macros as well as types bool, keywords true, false
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

void main()
{
    // You can change starting_value to different values and test the code you write below to check if it works for all cases.
    unsigned int starting_value = 0xF300F0A2;
    bool test_v;

    unsigned k = starting_value;

    /* Example: In the below example we clear all the bits in k except for the LSB, or Bit 0 and store the result in a new variable l.
     * For this purpose, we use BIT0 mask.
     * To see where this macro is defined and what it means, hold the Ctrl key on your keyboard and click on BIT0 word below.
     * The first 16 bitmasks, BIT0 to BITF are defined simply as BIT* where * is the bit index in hex.
     * For all other single-bit masks the macro is defined as BIT(x) where x is any unsigned number and is the index of the single 1 in the bitmask.
     * Optional: Debug the code without changing anything and see the values for k and l.
     */

    unsigned int l = k & BIT0;

    /*
     * TODO #1: Write a snippet of code that will cause the bits 5 and 7 of k to be set to 0,
     * without affecting any other bits of k. Store the result back into k. 5 points
     */



    /*
     * TODO #2: Write a snippet of code that will cause the third least-significant nibble (4-bit chunk) of k to contain
     * the bit pattern 1110 without affecting any other bits of k. Store the result back into k. 5 points
     * Hint: The least-significant nibble are bits 0, 1, 2, and 3. Your goal is to make bits 11, 10, 9, and 8 be 1, 1, 1, and 0, respectively.
     */


     
    /*
     * TODO #3: Write a snippet of code that toggles bit 0, sets bit 4 to 1, and resets bit 10 to 0. Store the result back into k. 5 points
     */




    /*
     * TODO #4: Write the expression that computes variable test_v, the Boolean value that is True if MSB of k equal to the LSB of k.
     * You need to remove the word "true" that is assigned to test_v and replace it with some other expression.
     * This expression should be true when MSB of k is equal to the LSB of k. 5 points
     */

    //Implement the evaluation for test_v here
    test_v = true;

    if (test_v)
        printf("The test variable is true.\n");
    else
        printf("The test variable is false.\n");
}
