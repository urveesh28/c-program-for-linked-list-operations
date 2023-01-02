#include<stdio.h>
#include<stdlib.h>
#define N 10
int a[N],b[N],c[20],i,j,k=0,flag,size1,size2;
int choice;
void union_set(int s1[],int s2[]);//fun1
void intrscton(int s1[],int s2[]);//fun2
void set_diff(int s1[],int s2[]);//fun3
int main()
{
    
   
    printf("\nEnter the size set a[N=10] : ");
    scanf("%d",&size1);
    printf("\nEnter elements : ");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the size of set b[N=10] : ");
	scanf("%d",&size2);
	printf("\nEnter elements : ");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]);
	}
    
	
	do{
		
		printf("\n   1. for set UNION\n   2. for set INTERSECTION\n   3. for set difference(a-b)\n    4.for set diference(b-a)\n   5.EXIT");
		printf("\nPlease enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : union_set(a,b);
					break;
			case 2 : intrscton(a,b);
					break;
			case 3 : set_diff(a,b);
					break;
			case 4 : set_diff(b,a);
					break;
			
			
		}
		
	}
	while(choice<5);
		return 0;
    
}
void union_set(int s1[],int s2[])
{
	for(i=0;i<size1;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<size2;i++)
	{
		int flag=0;
		for(j=0;j<size1;j++)
		{
			if(a[j]==b[i]){
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\n",b[i]);
			
		}
		
	}
	
}

void intrscton(int s1[],int s2[])
{
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(s1[i]==s2[j])
			{
				printf("%d\n",s1[i]);
			}
		}
	}
}

void set_diff(int s1[],int s2[])
{
	for(i=0;i<size1;i++)
	{
		int flag=0;
		for(j=0;j<size2;j++)
		{
			if(s1[i]==s2[j])
			{
				flag++;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\n",s1[i]);
		}
	}
}





