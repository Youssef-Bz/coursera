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
int max =0;
int min=0;
float mean=0;
float med=0;
  

  printf("Unsorted array \n");
  print_array(test);
  sort_array(test);
  printf("\nSorted array \n");
  print_array(test);
  printf("\n");
  max = find_maximum(test);
  min = find_minimum(test);
  med = find_median(test);
  mean = find_mean(test);
  print_statistics(med,mean,max,min);
 
}




void sort_array(unsigned char test[]){
	int i;
	
	for ( i=0; i<SIZE; i++)
		{
		int j;
		for ( j=0; j< SIZE, j++;)
			{
			if(test[j]>test[i])
			{
				int aux;
				aux=test[j];
				test[j]=test[i];
				test[i]=aux;
			}
			}
		}
}

int		find_minimum (unsigned char test[]){
int i;
int min;
	for ( i=0; i<SIZE; i++){
		if(test[i]<test[i+1]){
			min=test[i];
		}
	}
return min;
}


int find_maximum (unsigned char test[]){
int i;	
double max;	
 	for ( i=0; i<SIZE; i++){
		if(test[i]>test[i+1]){
			max=test[i];
		}
	}
return max;
}


float find_mean( unsigned char test[]){
int i;
float mean1;
	for ( i=0; i<SIZE; i++){
	
	mean1=mean1+test[i];
    }
float mean;
mean=mean1/(SIZE+1);
return mean;
}

float find_median(unsigned char sorted_array[]){
int i = 0;
float med1=0;

	if(SIZE%2==0){ med1=sorted_array[SIZE/2] + sorted_array[(SIZE/2)-1];}
	else { med1= sorted_array[(SIZE-2)/2];}
float med;
med=med1;
	return med;
}

void print_array(unsigned char test[]){
	int i;
	for ( i=0; i<SIZE; i++){
		printf("Test[%i]=%i\n", test[i],i);
}


void print_statistics(float med,float mean ,int max,int min ){
       printf("Median = %f \t Mean = %f \t Maximum = %i \t Minimum = %i		\n",	med,mean,max,min);
}
}




/* Add other Implementation File Code Here */
