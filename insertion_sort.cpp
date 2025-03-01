#include<stdio.h>
void insertion_sort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		
	while(a[j]>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=temp;
}
	
}
int main()

	{
		int n;
	printf("enter size");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

