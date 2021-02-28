#include<stdio.h>

int i, j;

// Temporary function for swapping
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// i) Rearrange the list in ascending order(using merge sort algorithm)
void AscendingSort(int list[], int size)
{
	 for (i = 0; i < size; i++) 
        {
            for (j = i + 1; j < size; j++)
            {
                if (list[i] > list[j]) 
                	swap(&list[i], &list[j]);
            }
        }
}

// ii) Rearrange the list in descending order
void DescendingSort(int list[], int size)
{
	for (i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if (list[i] < list[j])
				swap(&list[i], &list[j]);
		}
	}
}

// Temporary functio for display the list
void Display(int list[], int size)
{
	for (i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main()
{
	int n, copiedList[100],list[100];
	
	// Read the size of the list
	printf("\nENTER THE VALUE OF n :");
	scanf("%d", &n);
	
	// Read the list of 'n' lists from the keyboard
	printf("\nNOW ENTER THE INTEGER list:\n");
	for(i = 0; i < n; i++)
	{
		printf("list[%d]=",i);
		scanf("%d",&list[i]);
	}
	
	// Copying list
	for (i = 0; i < n; i++)
	{
		copiedList[i] = list[i];
	}
		
	// Ascending order
	printf("\nThe ascending order of the list:\n");
	AscendingSort(list, n);
	Display(list, n);
	
	// Descending order
	printf("\nThe descending order of the list:\n");
	DescendingSort(copiedList, n);
	Display(copiedList, n);		
}		
			
			
