#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char sex=0;
	int age;
	printf ("Please enter your sex and age:\n");
	for (;;)
	{
		printf ("sex(M/F):");
		scanf (" %c",&sex);
		printf ("age:");
		scanf (" %d",&age);
		if (((sex==77 || sex==109) && age>=18) || ((sex==70 || sex==102) && age>=16))
		{
			printf ("You can legally marry.\n");
			break;
		}
		else if (((sex==77 || sex==109) && age<18) || ((sex==70 || sex==102) && age<16))
		{
			printf ("You can't legally marry.\n");
			break;
		}
		else
		printf ("Please enter again.\n");
	}
	
	
	system ("pause");
	return 0;
}
