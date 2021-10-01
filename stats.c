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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
int Mean =0;
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
 unsigned char sorted_array[SIZE];
  int maximum = 0, minimum = 0, median = 0, mean = 0;
  
  printf("Embedded Software HW1 \n");
  printf("Unsorted array \n");
  print_array(test);
  sort_array(test);
  printf("\nSorted array \n");
  print_array(test);
  printf("\n");
  maximum = find_maximum(test);
  minimum = find_minimum(test);
  median  = find_median(test);
  mean   = find_mean(test);
  print_statistics(median, mean, maximum, minimum);
 
}

void print_array(unsigned char test[]){
for (int i=0; i<SIZE; i++){
	printf("Test[%i]== %i\n", test[i],i);
}
}

void sort_array(unsigned char test[]){

for (int i=0; i< SIZE; i++){
	for (int j=0; j< SIZE, j++){
		if(test[J]>test[i]){
			aux=test[j];
			test[j]=test[i];
			test[i]=aux;
		}
	}
}
}



int find_minimum (unsigned char test[]){
int min=0;
	for (int i=0; i<SIZE; i++){
		if(test[i]<test[i+1]){
			min=test[i];
		}
	}
return min;
}

int find_maximum (unsigned char test[]){
int max;	
 	for (int i=0; i<SIZE; i++){
		if(test[i]>test[i+1]){
			max=test[i];
		}
	}
return max;
}



int find_mean( unsigned char test[]){
	for (int i=0; i<SIZE; i++){
	Mean=Mean+test[i];
    }
Mean= Mean/(SIZE+1);
return Mean;
}


int find_median(unsigned char sorted_array[]){
int i = 0;
int med=0;

	if(size%2==0){ med=sorted_array[SIZE/2] + sorted_array[(SIZE/2)-1];
	else { med= sorted_array[(SIZE-2)/2];}
return med;
}

void print_statistics(int median, int mean, int maximum, int minimum) {
       printf("Median = %i; \t Mean = %i; \t Maximum = %i; \t Minimum = %i\n", med, Mean, Max, min);
}




/* Add other Implementation File Code Here */
