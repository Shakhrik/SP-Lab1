#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,l,len;
	char ch, name[25],rname[25],uname[25],lname[25];

	printf("\nEnter your name:");
	fgets(name,sizeof(name),stdin);

	len = strlen(name);
	printf("\nLength of your name: %d\n",--len);
	name[len]='\0';

	//Converting Uppercase characters to Lowercase
	
	strcpy(lname,name);
	for(i=0;i<len;i++)
	{
		if((lname[i] >= 'A') && (lname[i] <='Z'))
			lname[i] = lname[i] + 32;
	}
	printf("\nThe given name in LOWERCASE:%s\n",lname);
}
