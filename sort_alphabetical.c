#include <stdio.h>
#include <string.h>
int main(){
    char list[999][999]; //array of strings,
    char key[999]="";
    int choice=1, number_of_tries;
    int size;
    printf("\nEnter number of tries you want:");
	scanf("%d", &number_of_tries);
    while(choice<=number_of_tries){
        printf("\nEnter value of 'n': ");
        scanf("%d", &size);
        printf("NOW ENTER the NAMES:\n");
        getchar();
        for(int i=0;i<size;i++){
            printf("  %d-name(string):  ",i+1);
            fgets(list[i], 999, stdin);
        }
        for (int i = 0; i < size; i++) {
            for(int j=i+1;j<size;j++){
                if(strcmp(list[i],list[j])>0){
                    strcpy(key, list[i]);
                    strcpy(list[i], list[j]);
                    strcpy(list[j], key);
                }
            }
        }
        printf("\nEntered Names in alphabetic order: \n");
        for(int i=0;i<size;i++){
            printf("  %d: %s", i+1, list[i]);
        }
        choice++;
   }
	return 0;
} 
