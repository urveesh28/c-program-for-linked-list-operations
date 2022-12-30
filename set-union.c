#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[10],b[10],c[10],i,j,k=0,n1,n2,size;
	printf("Enter the size of 1st set :");
	scanf("%d",&n1);
	printf("Enter the elements of 1st set : ");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the size of 2nd set :");
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	//logic for union 
	for(i=0;i<n1;i++){
		
		for(j=0;j<k;j++){
			if(c[j]==a[i]){
				break;
			}
		}
	}
	
	
	
	
	
	return 0;
}	