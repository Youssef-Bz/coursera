/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Assignment>
 *
 * First coursera assignment.
 *
 * @author Youssef Bouzouaya
 * @date 01/10/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(float med, float mean, int max, int min);
/**
*@brief Print statisics
*This functions prints calculated statistics
*
*@param test[] Array of Size "TEST"
*
*@return VOID
*/


void sort_array(unsigned char test[]);

/**
 * @brief Sort the array from the largest to the smallest value
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return VOID
 */



void print_array(unsigned char test[]);

/**
 * @brief Print the array
 *
 *
 * @param test[] Array of size "SIZE"=
 *
 * @return VOID
 */
 
 int find_maximum(unsigned char test[]);

/**
 * @brief Calculate maximum
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return maximum
 */
 
int find_minimum(unsigned char test[]);

/**
 * @brief Calculate minimum
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return minimum
 */
 
 
 float find_median(unsigned char test[]);

/**
 * @brief Calculate median
 
 *
 * @param test[] Array of size "SIZE"
 *
 * @return median
 */

 
 float find_mean(unsigned char test[]);

/**
 * @brief Calculate mean
 *
 *
 * @param test[] Array of size "SIZE"
 *
 * @return mean
 */







#endif /* __STATS_H__ */
