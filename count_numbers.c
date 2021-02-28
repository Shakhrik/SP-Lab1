#include <stdio.h>
#include <math.h>
int main(){
    int list[999];
    int choice=1;
    int size;
    int odd_count, even_count, negative_count, positive_count,prime_count;
    int is_prime;
    while(choice<19){
        odd_count=even_count=negative_count=positive_count=prime_count=0; //reset count
        printf("\nEnter value of 'n': ");
        scanf("%d", &size);
        printf("NOW ENTER INTEGER NUMBERs:\n");
        for(int i=0;i<size;i++){
            printf("%d-number: ",i+1);
            scanf("%d", &list[i]);
            if(list[i]>0){positive_count++;}
            else if(list[i]<0){negative_count++;}
            if(list[i]%2==0) {even_count++;}
            else {odd_count++;}
            is_prime=1;
            for(int j=2; j<sqrt( abs(list[i]) ); j++){
                if(abs(list[i])%j==0){
                    is_prime=0;
                    break;
                }
            }
            if(abs(list[i])<=1) { is_prime=0;}
            if(is_prime==1){prime_count++;}
        }
        printf("\nPositive numbers: %d \nNegative numbers: %d \n", positive_count, negative_count);
        printf("Odd numbers: %d \nEven numbers: %d \n", odd_count, even_count);
        printf("Prime numbers: %d \n", prime_count);
        choice++;
   }
	return 0;
} 

