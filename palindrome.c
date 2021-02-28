#include<stdio.h>
#include<string.h>

int main()
{
	int i, j, k, l, len;
	char ch, name[25], rname[25], uname[25], lname[25];

	printf("\nEnter your name: ");
	fgets(name,sizeof(name),stdin);
	printf("\nHELLO %s\n",name);

	len = strlen(name);
	printf("\nLength of your name: %d\n",--len);
	name[len] = '\0';

	//Reversing the name
	strcpy(rname,name);
	j=len-1;
	k=len/2;
	for(i=0;i<k;i++)
	{
		ch=rname[j];
		rname[j]=rname[i];
		rname[i]=ch;
		j--;
	}
	rname[len]='\0';
	printf("\nREVERSED NAME: %s\n",rname);

	//Checking for Palindrome
	if (!strncmp(rname,name,len))
		printf("\nThe given name is a PALINDROME\n");
	else
		printf("\nThe given name is not a PALINDROME\n");
}
