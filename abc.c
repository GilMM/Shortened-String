#include <stdio.h>

#define MAX 80

void q1();
int main()
{
	q1();
	return 0;
}
void q1()
{
	char text[]= "abcefIJKLMNOpQrstuv567zyx";	
	int beginning = 0, i, j, size = sizeof(text)-1; /* beginning is where is starting, i - is the */ 
	printf("%s\n",text);
	
	while(beginning<size) 
	{
		/* this loop is checking that we shorten only letters */
		for (;beginning<size && 
			!((text[beginning]>= 'a' && text[beginning]<= 'z') || 
			 (text[beginning]>= 'A' && text[beginning]<= 'Z'));	
			 beginning++) 
		{		 
		}
		/*this loop is checking that we don't exceed from the array
		  and the index of two consecutive lettes*/
		for(i=beginning+1; i<size && text[i]-text[i-1]==1; i++)
		{					
		}
		/* this condition is shortens the string */
		if(i-beginning >= 3) 
		{
			text[beginning+1]	= '-';
			text[beginning+2] = text[i-1];
			beginning += 3;
			for(j=beginning; i<=size; i++, j++)
			{
				text[j]=text[i];
			}
			size=j;
		}
		else
		{
			beginning = i;
		}
	}
	printf("%s\n",text);		
}
