#include <stdio.h>
#include <string.h>
int main()
{
    int size, number_of_tries;
    char  ch, sentence[999], lower[999];
   	
   	printf("\nEnter the number of tries you want:");
   	scanf("%d", &number_of_tries);
   	
    for(int j = 0; j < number_of_tries; j++) {

		printf("\nEnter the sentence : ");
		getchar();
		fgets(sentence, 999, stdin);
		// Converting Uppercase characters to Lowercase
		size=strlen(sentence);
		strcpy(lower, sentence);
		for(int i=0; i<size; i++)
		{
		    if((lower[i] >= 'A')  && (lower[i] <= 'Z'))
		        lower[i]=lower[i]+32;
		}
		printf("\n%d. The given sentence in LOWERCASE : %s ",j+1, lower);
    }
}
