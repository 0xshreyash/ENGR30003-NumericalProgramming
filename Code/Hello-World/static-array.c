/*
 * static-array.c
 *
 *  Created on: 23-Jul-2017
 *      Author: shreyashpatodia
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SIZE 5
/*
int main(int argc, char **argv) {
	int arr[SIZE];
	FILE *fp = fopen("static-data.txt", "r");
	int sum = 0;
	for(int i = 0; i < SIZE; i++) {
		fscanf(fp, "%d", &arr[i]);
		sum += arr[i];
	}
	fclose(fp);
	// Finding the mean
	double mean = (sum * 1.0)/SIZE;

	// Finding the variance
	double var = 0;
	for(int i = 0; i < SIZE; i++) {
		var += pow(arr[i] - mean, 2);
	}
	var = var/SIZE;

	// Output the values here
	printf("The mean is: %f \n", mean);
	printf("The variance is: %f \n", var);

	return 0;
}
*/

