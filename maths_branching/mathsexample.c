#include <stdio.h>

int hasboth(char * s, char c, char d){
	int i;
	int a = 0;
	int b = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == c)
			a++;
		else if(s[i] == d)
		    b++;
		
    }
    if(a >= 1 && b >=1 )
    return 1;
    else return 0;
}
int main()
{
char buffer [80];
char ch1, ch2;


printf("Input a character into the buffer");
	scanf("%[\n]", buffer);
printf("Enter a character into ch1");
scanf(" %c", &ch1);
printf("Enter a character into ch2");
scanf(" %c", &ch2);

printf("hasboth returned (%d)\n", hasboth(buffer,ch1,ch2));
if(ch1 == ch2)
	printf("both characters are the same");
else if(hasboth(buffer,ch1,ch2) == 1)
	printf("\t Both characters appear in the string \n");
else if(hasboth(buffer,ch1,ch2) ==0)
	printf("\t Both characters do not appear in the string together \n");
	
	
	
	
	
	}