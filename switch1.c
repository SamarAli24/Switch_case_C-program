#include<stdio.h>
int main()
{
	
	char week;
	printf("Enter Alphabet : ");
	scanf("%c",&week);
	switch (week)
	
	{
	case 'm': printf("\n first day of week is monday");
	break;
		
	case 't':	printf("\n second day of week is tuesday");
	break;	
	
	case 'w': printf("\n third day of week is wednesday");
	break;
	
	case 'h': printf("\n fourth day of week is thursday");
	break;
	
	case 'f': printf("\n fifth day of week is friday");
	break;
	
	case 'a': printf("\n sixth day of week is saturday");
	break;
	
	case 'u': printf("\n seventh day of week is sunday");
	break;
	
	default: printf("You neither entered any ");
	break;
}
	
	return 0;
	
	
}
	
	
	
	
