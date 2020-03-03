

//CCCCCHHHHHAAAAMMMMPPPPPIIIIIIOOOOONNNNNNN
//  C    H    A  M   P    I     O     N



//program:Linear search
//S3 CS Roll no:29

#include<stdio.h>

void readnum(int a[],int n);
int linearsearch(int a[],int n,int key);

void readnum(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}
}

int linearsearch(int a[],int n,int key)
{	
	int i;
	for(i=0;i<n;i++)
	{
	 if(a[i]==key)
	 
		
	 else
		return(0);
	 
}

void main()
{
	int a[100],key,n,positon;
	printf("Enter the no. of elements:");
	scanf("%d",&n);
	printf("\n Enter the%d elements:",n);
	\\readnum(a,n);
	printf(" \n Enter the key :");
	scanf("%d",&k);
	position=linearsearch(a,n,k);
	if (position!=0)
	{
	 printf("\n The element is found %d",position);
	}else{
	 printf("\n The element is not found");
	}
} 
