#include <stdio.h>
int main(){
    float list[999];
    int choice=1;
    int size;
    float sum,average;
    while(choice<19){
        sum=average=0.0;
        printf("\nEnter value of 'n': ");
        scanf("%d", &size);
        printf("NOW ENTER THE REAL NUMBERs:\n");
        for(int i=0;i<size;i++){
            scanf("%f", &list[i]);
            sum=sum+list[i];
        }
        printf("Sum of numbers: %f \nAverage of numbers: %f \n", sum, sum/size);
        choice++;
   }
	return 0;
}
