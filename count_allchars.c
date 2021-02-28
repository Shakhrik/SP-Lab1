#include<stdio.h>
#include<string.h>
int main()
{
    int len=0, noalphs=0, nonums=0, nowords=1, number_of_tries;
    char ch, string[999];
    
    printf("\nEnter the number of tries you want:");
   	scanf("%d", &number_of_tries);
   	
   	for(int j = 0; j < number_of_tries; j++) {
		printf("This program detects number of characters, alphabetics, numericals and words in a sentence!\n\n");
		printf("Enter a sentence: ");
		getchar();
		fgets(string, sizeof(string), stdin);
		len=strlen(string);
		string[len]='\0';
		for(int i=0; i<len; i++)
		{
		ch=string[i];
		if((ch >= 'A') && (ch <='Z') || (ch >='a') && (ch <='z'))
		    noalphs++;
		if((ch >= '0') && (ch <= '9'))
		    nonums++;
		if(ch == 32)
		    nowords++;
		}
		printf("\nNumber of characters: %d\nNumber of alphabetics: %d\nNumber of numericals: %d\nNumber of words: %d\n", len, noalphs, nonums, 				nowords);
	}
}

