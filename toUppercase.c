#include <stdio.h>
#include <string.h>
int main()
{
    int size, number_of_tries;
    char  ch, sentence[999], upper[999];
    
	printf("\nEnter the number of tries you want:");
   	scanf("%d", &number_of_tries);
   	
   	for(int j = 0; j < number_of_tries; j++) {
		printf("\nEnter the sentence : ");
		getchar();
		fgets(sentence, 999, stdin);
		
		// Converting Lowercase characters to Uppercase
		size=strlen(sentence);
		strcpy(upper, sentence);
		for(int i=0; i<size; i++)
		{
		    if((upper[i] >= 'a')  && (upper[i] <= 'z'))
		        upper[i]=upper[i]-32;
		}
		printf("\n%d. The given sentence in UPPERCASE : %s ",j+1, upper);
	}
}
