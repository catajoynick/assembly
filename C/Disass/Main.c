/*

	Programmer: Nickskiejoi

*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void UnlockSecret(void)
{

	printf("Secret code: 4832-3422-3431-9847\n\n");
}

int IsPasswordCorrect(char *password, char *userInput)
{

	int result;

	result = strcmp(password, userInput);

	if(result == 0)
	{
		return 1;
	}
	else return 0;
}

int main(int argc, char **argv)
{

	int checkPass = 0;
	if(argc < 2)
	{
		printf("%s password_to_unlock", argv[0] );
		exit(0);
	}

	checkPass = IsPasswordCorrect(argv[1], "\x09\x01\x02\x03");

	if (checkPass == 1)
	{
		UnlockSecret();
	}
	else
	{
		printf("\n\nIncorrect Password! Please try again! \n\n\n");
	}

	return
}