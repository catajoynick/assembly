#include<stdio.h>



int IamGlobalVar;
int IamInitializedGlobalVar = 20;

int AddNumbers(int number_1, int number_2){

	int sum = 0;

	sum = number_1 + number_2; 

	return sum;
}

int SubtractNumber(int number_1, int number_2){

	int result = 0;

	result = number_1 - number_2;

	return result;
}

int main(int argc, char **argv){

	int input_1 = atoi(argv[1]);
	int input_2 = atoi(argv[2]);


	printf("\n\nWelcome to a Simple Add/Subtract Program\n\n");
	printf("Sum of %d + %d = %d\n\n", input_1, input_2, AddNumbers(input_1,input_2));

	printf("Difference of %d + %d = %d\n\n", input_1, input_2, SubtractNumber(input_1,input_2));

	getchar();
	return 0;
}