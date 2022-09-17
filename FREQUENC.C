#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count=0,num;
	int arr[10];
	int freq[10];
	clrscr();
	printf("Enter size of array");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Element %d",i);
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
		for(i=0;i<num;i++)
		{
		count=1;
			for(j=i+1;j<num;j++)
			{
				if(arr[i]==arr[j])
				{
				count=count+1;
				// Because it does not repeat a same number
				freq[j]=0;
				}
			}
			if(freq[i]==-1)
			{
			//count value should be stored in array for every number
			freq[i]=count;
			}
		}
		for(i=0;i<num;i++)
		{
			if(freq[i]>0)
			{
			printf("\nNumber %d occurs %d times",arr[i],freq[i]);
			}
		}
getch();
}