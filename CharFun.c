#include <stdio.h>
#include <ctype.h>

char mystring[] = "My name is Bazzinga. I was born on 6th Dec 92 and I love fastfood. ";
void chartypes()
{
	int i;
	char c;
	int numDigit = 0;
	int numLetter = 0;
	int numUpCase = 0;
	int numLowCase = 0;
	int numSpaces = 0;
	int numPunct = 0;
	int numCtrl = 0;
	int numUnknown = 0;
	int lengthOfString;
	lengthOfString = strlen(mystring);

	for (int i = 0; i < lengthOfString; i++)
	{
		c = mystring[i];
		if(isalpha(c))
		{
			numLetter++;
			if (isupper(c))
				{
					printf("'%c' [uppercase character]\n", c);
					numUpCase++;
				}	
			else{
				printf("'%c' [lowercase character]\n", c);
				numLowCase++;
			}
		}
		else if(isdigit(c))
		{
			printf("'%c' [digit]\n", c);
			numDigit++;
		}
		else if(ispunct(c))
		{
			printf("'%c' [punctuation] \n", c);
			numPunct++;
		}
		else if(isblank(c))
		{
			printf("'%c' [Blank] \n", c);
			numSpaces++;
		}
		else if(iscntrl(c))
		{
			printf("'%c' [ctrl]\n", c);
			numCtrl++;
		}
		else {
			printf("'%c' [UNKNOWN] \n", c);
			numUnknown++;
		}
	}
	printf("The string contains %d character : %d letters(%d uppercase, %d lowercase)\n",lengthOfString, numLetter, numUpCase, numLowCase );
	printf(" Total number of digits : %d, number of ctrl :%d , number of Spaces %d, number of Unknow %d \n", numDigit, numCtrl, numSpaces, numUnknown );
}

int main(int argc, char const *argv[])
{
	chartypes();
	return 0;
}