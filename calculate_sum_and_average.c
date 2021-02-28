#include <stdio.h>
int main(){
    float list[999];
    int choice=1, number_of_tries;
    int size;
    float sum,average;
    printf("\Enter the number of tries you want: ");
    scanf("%d", &number_of_tries);
    while(choice<=number_of_tries){
        sum=average=0.0;
        printf("\nEnter value of 'n': ");
        scanf("%d", &size);
        printf("NOW ENTER THE REAL NUMBERs:\n");
        for(int i=0;i<size;i++){
        	printf("list[%d]=", i);
            scanf("%f", &list[i]);
            sum=sum+list[i];
        }
        printf("\nSum of numbers: %f \nAverage of numbers: %f \n", sum, sum/size);
        choice++;
   }
	return 0;
}

